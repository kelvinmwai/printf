#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * printf_integer - prints an integer number
 * @list: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list list, int char_prnt)
{
	int num = va_arg(list, int);
	int digits = 0;
	int tmp = num;
	int dig;

	if (num < 0)
	{
		char_prnt += _putchar('-');
		num = -num;

		tmp = num;
	}

	do {
		digits++;
		tmp /= 10;
	} while (tmp != 0);

	while (digits > 0)
	{
		int dec = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			dec *= 10;
		}
		dig = num / dec;
		char_prnt += _putchar(dig + '0');
		num -= dig * dec;
		digits--;
	}
	return (char_prnt);
}
