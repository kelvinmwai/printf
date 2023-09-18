#include "main.h"

/**
 * printf_integer - prints an integer
 * @args: number of arguments
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int printed)
{
	int num = va_arg(args, int);
	int digits = 0;
	int tmp = num;
	int dig;

	if (num < 0)
	{
		printed += _putchar('-');
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
		printed += _putchar(dig + '0');
		num -= dig * mod10;
		digits--;
	}
	return (printed);
}
