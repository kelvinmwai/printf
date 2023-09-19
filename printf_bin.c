#include "main.h"

/**
 * printf_binary - prints a binary number
 * @num: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_binary(unsigned int num, int char_prnt)
{
	int binary[32] = {0};
	int x = 0;

	if (num == 0)
	{
		_putchar('0');
		char_prnt++;
		return (char_prnt);
	}

	while (num > 0)
	{
		binary[x] = num % 2;
		num /= 2;
		x++;
	}

	while (x > 0)
	{
		x--;
		_putchar('0' + binary[i]);
		char_prnt++;
	}

	return (char_prnt);
}
