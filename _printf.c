#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_func - function prints a string
 * @s: pointer(string)
 * @j: pointer to num
 * @r: pointer to num
 * @i: pointer to num
 */
void str_func(char *s, int *j, int *r, int *i)
{
	int l = 0;

	if (s == NULL)
		s = "(null)";

	while (s[l])
	{
		_putchar(s[l]);
		l++;
		*j += 1;
		*r += 1;
	}
	*i += 1;
}

/**
 * char_func - function prints a character
 * @c: character
 * @r: pointer to num
 * @i: pointer to num
 */
void char_func(char c, int *r, int *i)
{
	_putchar(c);
	*r += 1;
	*i += 1;
}

/**
 * percent_func - function prints percent sign
 * @r: pointer to num
 * @i: pointer to num
 */

void percent_func(int *r, int *i)
{
	_putchar('%');
	*r += 1;
	*i += 1;
}

/**
 * _printf - function that produces output according to a format
 * @format: format is a character string.
 * Return: returns the length of the 'format'
 */

int _printf(const char *format, ...)
{
	int i = 0, j, r = 0;
	va_list args;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				char_func(va_arg(args, int), &r, &i);
				break;
			case 's':
				str_func(va_arg(args, char *), &j, &r, &i);
				break;
			case '%':
				percent_func(&r, &i);
				break;
			/*default:
				_putchar('%');
				r++;
				break;*/
			}
		}
		else
		{
			_putchar(format[i]);
			r++;
		}
		i++;
	}
	va_end(args);
	return (r);
}
