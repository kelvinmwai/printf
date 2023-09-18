#include "main.h"
/**
 * selector - selects the respective specifier
 * @list: number of arguments
 * @char_prnt: the characters printed
 * @format: the format specifier
 * Return: printed characters
 */
int selector(const char *format, va_list list, int char_prnt)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			char_prnt = printf_integer(list, char_prnt);
			break;
		case 'c':
			_putchar(va_arg(list, int));
			char_prnt++;
			break;
		case 's':
			char_prnt = printf_string(list, char_prnt);
			break;
		case '%':
			_putchar('%');
			char_prnt++;
			break;
		case 'b':
			char_prnt = printf_binary(va_arg(list, unsigned int), char_prnt);
			break;
		case 'x':
		case 'X':
			char_prnt = _x(va_arg(list, unsigned int), char_prnt, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			char_prnt = printf_octal(va_arg(list, unsigned int), char_prnt);
			break;
		case 'u':
			char_prnt = printf_unsigned(va_arg(list, unsigned int), char_prnt);
			break;
		case 'r':
			char_prnt = printf_reverse(list, char_prnt);
			break;
		case 'p':
			char_prnt = printf_pointer(list, char_prnt);
			break;
		default:
			break;
	}
	return (char_prnt);
}
