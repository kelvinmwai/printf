#include "main.h"

/**
 * printf_octal - prints a binary number
 * @num: number of arguements
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_octal(unsigned int num, int char_prnt)
{
	int oct[100], x = 0, y;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[x] = 48 + remainder;
		x++;
		num /= 8;
	}

	if (x == 0)
	{
		_putchar('0');
		char_prnt++;
	}
	else
	{
		for (y = x - 1; y >= 0; y--)
		{
			_putchar(oct[y]);
			char_prnt++;
		}
	}
	return (char_prnt);
}
