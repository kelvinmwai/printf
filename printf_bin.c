#include "main.h"

/**
 * printf_binary - prints a binary number to standard output
 * @num: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_binary(unsigned int num, int char_prnt)
{
	int binary[32] = {0};
	int j = 0;

	if (num == 0)
	{
		_putchar('0');
		char_prnt++;
		return (char_prnt);
	}

	while (num > 0)
	{
		binary[j] = num % 2;
		num /= 2;
		j++;
	}

	while (j > 0)
	{
		j--;
		_putchar('0' + binary[j]);
		char_prnt++;
	}

	return (char_prnt);
}
