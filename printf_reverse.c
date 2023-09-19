#include "main.h"

/**
 * printf_reverse - prints a string in reverse
 * @list: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_reverse(va_list list, int char_prnt)
{
	char *str = va_arg(list, char *);
	int leng = 0;
	int i;

	while (str[leng])
	{
		leng++;
	}

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		char_prnt++;
	}

	return (char_prnt);
}
