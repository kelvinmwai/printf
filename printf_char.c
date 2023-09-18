#include "main.h"

/**
 * printf_char - prints a char value
 * @args: the arguments to consider
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int printed)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (printed + 1);
}
