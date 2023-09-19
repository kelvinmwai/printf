#include "main.h"

/**
 * printf_char - prints a binary number
 * @list: the arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list list, int char_prnt)
{
	int chr = va_arg(list, int);

	_putchar(chr);
	return (char_prnt + 1);
}

