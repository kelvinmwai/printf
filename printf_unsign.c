#include "main.h"

/**
 * printf_unsigned - prints an unsigned integer
 * @num: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_unsigned(unsigned int num, int printed)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		char_prnt++;
	}
	else
	{
		char unsigned_str[11];
		int x = 0;

		while (num != 0)
		{
			unsigned_str[x] = (num % 10) + '0';
			num /= 10;
			x++;
		}
		for (x = digits - 1; x >= 0; x--)
		{
			_putchar(unsigned_str[x]);
			char_prnt++;
		}
	}
	return (char_prnt);
}
