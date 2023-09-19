#include "main.h"

/**
 * printf_string - prints a string
 * @list: number of arguements
 * @char_prnt: the printed characters
 * Return: printed characters
 */

int printf_string(va_list list, int char_prnt)
{
	char *str = va_arg(list, char *);
	int str_len = 0;
	int x;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		str_len++;
	}
	write(1, str, str_len);
	char_prnt += str_len;

	return (char_prnt);
}
