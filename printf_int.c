#include "main.h"
/**********PRINT INTEGER NUMBER********/
/**
 * printf_int - prints integer characters in a string
 * @args: number of argument
 * @char_prnt: printed characters to stdout
 * Return: printed characters
 */

int printf_int(va_list args, int char_prnt)
{
	int num = va_arg(args, int);
	int dig = 0;
	int tmp = num;
	int dig;

	if (num < 0)
	{
		char_prnt += _putchar('-');
		num = -num;

		tmp = num;
	}

	do {
		dig++;
		temp /= 10;
	} while (tmp != 0);

	while (dig > 0)
	{
		int mod10 = 1;
		int i;

		for (i = 1; i < dig; i++)
		{
			mod10 *= 10;
		}
		dig = num / mod10;
		char_prnt += _putchar(dig + '0');
		num -= dig * mod10;
		dig--;
	}
	return (char_prnt);
}
