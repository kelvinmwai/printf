#include <unistd.h>

/**
 * _putchar - write character c to standard output
 * @c: character to be written
 * Return: 1 for success, -1 if otherwise
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
