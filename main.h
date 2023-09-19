#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_integer(va_list list, int char_prnt);
int selector(const char *format, va_list list, int char_prnt);
int printf_char(va_list list, int char_prnt);
int printf_binary(unsigned int num, int char_prnt);
int printf_hexa(unsigned int num, int char_prnt, int uppercase);
int printf_octal(unsigned int num, int char_prnt);
int printf_unsigned(unsigned int num, int char_prnt);
int printf_reverse(va_list list, int char_prnt);
int printf_pointer(va_list list, int char_prnt);

#endif
