#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: pointer to array of characters
 * Return: characters printed to standard output
 */
int _printf(const char *format, ...)
{
	int x, char_prnt = 0, printed;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format ==  NULL)
		return (-1);

	va_start(list, format);

	for (x = 0; format && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			buffer[buff_ind++] = format[x];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			char_prnt++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &x);
			width = get_width(format, &x, list);
			precision = get_precision(format, &x, list);
			size = get_size(format, &x);
			++x;
			printed = form_ident(format, &x, list, buffer,
				flags, width, precision, size);/*identifies format c,d,i,%*/
			if (printed == -1)
				return (-1);
			char_prnt += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);

	return (char_prnt);
}

/**
 * print_buffer - Prints the contents of the buffer
 * @buffer: stores array of chars
 * @buff_ind: Index at which to add next char || the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

