#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_integer(va_list args, int printed);
int printf_char(va_list args, int printed);

#endif

