#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _printf - Printf function
 * @format: pointer to array of characters
 * Return: characters printed to standard output
 */
int _printf(const char *format, ...)
{
	int char_prnt  = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
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
			{
				break;
			}
			else if(*format == 's')
			{
				char *str = va_arg(list, char*);
				int str_len = 0;
				int i;

				for (i = 0; str[i] != '\0'; i++)
				{
					str_len++;
				}
				write(1, str, str_len);
				char_prnt += str_len;
			}
			else if(*format == 'c' || *format == '%')
			{
				char_prnt = selector(format, list, char_prnt);
			}
		}
		format++;
	}
va_end(list);
return (char_prnt);
}
