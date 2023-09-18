#include "main.h"

/**
 * printf_char - prints a char value
 * @list: the arguments to consider
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list list, int char_prnt)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (char_prnt + 1);
}
