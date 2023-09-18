#include "main.h"

/**
 * printf_string - prints a string
 * @list: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_string(va_list list, int char_prnt)
{
	char *str = va_arg(list, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		char_prnt++;
		str++;
	}
	return (char_prnt);
}
