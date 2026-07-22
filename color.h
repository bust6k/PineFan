#pragma once
#ifdef _WIN32
#include <windows.h>

void set_console_color(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

#define RED_COLOR set_console_color(FOREGROUND_RED | FOREGROUND_INTENSITY)
#define RESET_COLOR set_console_color(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define GREEN_COLOR set_console_color(FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define CYAN_COLOR set_console_color(FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY)

#else

#define RED_COLOR "\e[91m"
#define RESET_COLOR "\e[0m"
#define GREEN_COLOR "\e[92m"
#define CYAN_COLOR "\e[94m"
#endif


