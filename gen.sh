#echo -e "enter the name for the lexer name\\n"
#read lex
#echo -e "enter the name for the parser name\\n"
#read parse

lex="lex_rules.l"
parser="parser_rules.y"


rm -f lex.yy.c
flex $lex

rm -f parser_rules.tab.c
rm -f parser_rules.tab.h
bison   -d -o  parser_rules.tab.c $parser
