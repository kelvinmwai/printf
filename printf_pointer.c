#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * printf_pointer - prints a pointer
 * @list: number of arguments
 * @char_prnt: the printed characters
 * Return: printed charcaters
 */

int printf_pointer(va_list list, int char_prnt)
{
	void *ptr = va_arg(list, void*);
	unsigned long num = (unsigned long) ptr;
	int digits = 0;
	int x;
	unsigned long tmp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (tmp != 0)
	{
		digits++;
		tmp /= 16;
	}

	char_prnt += _putchar('0');
	char_prnt += _putchar('x');

	if (num == 0)
	{
		char_prnt += _putchar('0');
	}
	else
	{
		for (x = digits - 1; x >= 0; x--)
		{
			int dig = num % 16;

			hex[x] = hex_digits[dig];
			num /= 16;
		}
		for (x = 0; x < digits; x++)
		{
			char_prnt += _putchar(hex[x]);
		}
	}
	return (char_prnt);
}
