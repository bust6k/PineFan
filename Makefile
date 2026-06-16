# PineFan Makefile
# Compiles Flex/Bison lexer and parser, then links C and C++ object files

TARGET_ARCH = x86_64
CXX = g++
CC = gcc

override CXXFLAGS += -std=c++20 -Wno-write-strings
override CFLAGS += -Wno-write-strings

TARGET = g

# Generated files
LEX_SRC = lex.yy.c
BISON_SRC = parser_rules.tab.c
BISON_HEADER = parser_rules.tab.h

# C source files (excluding generated ones, they have separate rules)
C_SOURCES := $(wildcard *.c)

# C++ source files
CPP_SOURCES := $(wildcard *.cpp)

# Object files
C_OBJECTS := $(C_SOURCES:.c=.o)
CPP_OBJECTS := $(CPP_SOURCES:.cpp=.o)
LEX_OBJ := $(LEX_SRC:.c=.o)
BISON_OBJ := $(BISON_SRC:.c=.o)
OBJECTS := $(C_OBJECTS) $(CPP_OBJECTS) $(LEX_OBJ) $(BISON_OBJ)

.PHONY: all clean force

all: $(TARGET)

# Force regeneration of generated files
force:
	rm -f $(LEX_SRC) $(BISON_SRC) $(BISON_HEADER)

# Generate lexer from Flex specification
$(LEX_SRC): lex_rules.l
	flex $<

# Generate parser from Bison specification
$(BISON_SRC) $(BISON_HEADER): parser_rules.y
	bison -d -o $(BISON_SRC) $<

# Compile C sources
%.o: %.c
	$(CC) $(CFLAGS) -c $? -o $@

# Compile C++ sources
# TODO: if $? don't work(and in other ones,too) so then change to $< instead
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $? -o $@

# Explicit rule for lex.yy.o to ensure header dependency
$(LEX_OBJ): $(LEX_SRC) $(BISON_HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Explicit rule for parser_rules.tab.o
$(BISON_OBJ): $(BISON_SRC) $(BISON_HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Link everything together
$(TARGET): $(OBJECTS)
	$(CXX) $^ -o $@ $(CXXFLAGS)

clean:
	rm -f $(LEX_SRC) $(BISON_SRC) $(BISON_HEADER) $(OBJECTS) $(TARGET)
