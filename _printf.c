#include "main.h"


/**
 * _printf - function that produces output according to a format
 * @format: format is a character string.
 * Return: returns the length of the 'format'
*/
int _printf(const char *format, ...)
{
	va_list args;
	int r = 0;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format && *format != '\0')
	{
		if (*format == '%')
			r += print_format(*(++format), args);
		else
			r += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (r);
}

