#include "main.h"

/**
 * print_format - function choose function to run
 * @spec: character
 * @args: arguments
 * Return: returns 'r'
 */

int print_format(char spec, va_list args)
{
	int r = 0;

	if (spec == 'c')
		r += print_char(va_arg(args, int));
	else if (spec == 's')
		r += print_str(va_arg(args, char *));
	else if (spec == '%' || spec - 1 == '%')
		r += write(1, "%", 1);
	else if (spec == 'd' || spec == 'i')
		r += print_digit(va_arg(args, int), 10);
	else if (spec == 'b')
		r += print_digit(va_arg(args, unsigned int), 2);
	else if (spec == 'u')
		r += print_digit(va_arg(args, unsigned int), 10);
	else if (spec == 'o')
		r += print_digit(va_arg(args, unsigned int), 8);
	else if (spec == 'x')
		r += print_digit(va_arg(args, unsigned int), 16);
	else if (spec == 'X')
		r += print_hexa_uppercase(va_arg(args, unsigned int));
	else if (spec == 'S')
		r += non_printable_chars(va_arg(args, char *));
	else if (spec == 'r')
		r += print_rev(va_arg(args, char *));
	else if (spec == 'p')
		r += print_digit(va_arg(args, unsigned long), 16);
	else if (spec == 'R')
		r += print_rot13(args);
	else
	{
		r += write(1, "%", 1);
		r += write(1, &spec, 1);
	}
	return (r);
}
