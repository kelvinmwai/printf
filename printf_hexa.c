#include "main.h"

/**
 * _hex - prints a hexadecimal number
 * @num: number of arguments
 * @char_prnt: the printed characters
 * @uppercase: the uppercase format
 * Return: printed characters
 */

int _hex(unsigned int num, int char_prnt, int uppercase)
{
	int hex[100], a = 0, b;

	while (num != 0)
	{
		int modul = num % 16;

		if (modul < 10)
		{
			hex[a] = 48 + modul;
		}
		else
		{
			if (uppercase)
			{
				hex[a] = 65 + (modul - 10);
			}
			else
			{
				hex[a] = 97 + (modul - 10);
			}
		}
		a++;
		num /= 16;
	}
	if (a == 0)
	{
		_putchar('0');
		char_prnt++;
	}
	else
	{
		for (b = a - 1; b >= 0; b--)
		{
			_putchar(hex[b]);
			char_prnt++;
		}
	}
	return (char_prnt);
}
