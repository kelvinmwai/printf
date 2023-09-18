#include "main.h"

/**
 * printf_integer - prints an integer
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
		int mod10 = 1;
		int x;

		for (x = 1; x < digits; x++)
		{
			mod10 *= 10;
		}
		dig = num / mod10;
		char_prnt += _putchar(dig + '0');
		num -= dig * mod10;
		digits--;
	}
	return (char_prnt);
}
