#include "main.h"

/**
 * _x - prints a hexadecima; number
 * @num: number of arguments
 * @char_prnt the printed characters
 * @uppercase: the uppercase equivalent
 * Return: printed charcaters
 */

int _x(unsigned int num, int char_prnt, int uppercase)
{
	int hex[100], x = 0, y;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[x] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[x] = 65 + (remainder - 10);
			}
			else
			{
				hex[x] = 97 + (remainder - 10);
			}
		}
		x++;
		num /= 16;
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
			_putchar(hex[j]);
			charprnt++;
		}
	}
	return (char_prnt);
}
