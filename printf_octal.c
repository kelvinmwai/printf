#include "main.h"

/**
 * printf_octal - prints an octal number to standard output
 * @num: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_octal(unsigned int num, int char_prnt)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int modul = num % 8;

		oct[i] = 48 + modul;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		char_prnt++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			char_prnt++;
		}
	}
	return (char_prnt);
}
