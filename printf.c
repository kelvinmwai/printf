#include "main.h"

/**
 * _printf - Printf function
 * @format: pointer to array of characters
 * Return: characters printed to standard output
 */
int _printf(const char *format, ...)
{
	int char_prnt = 0;
	va_list lst;

	if (format ==  NULL)
		return (-1);

	va_start(lst, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_prnt++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				char_prnt++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(lst, int);

				write(1, &c, 1);
				char_prnt++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(lst, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				char_prnt += str_len;
			}
		}
	format++;
	}
	va_end(lst);
	return (char_prnt);
}
