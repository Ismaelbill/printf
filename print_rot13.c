#include "main.h"

/**
 * print_rot13 - prints the 13th letter ahead
 * every element in the string
 * @args: arguments
 * Return: counter
 */
int print_rot13(va_list args)
{
	int r = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";

	for (; *s; s++)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			char base;

			if (*s >= 'a' && *s <= 'z')
				base = 'a';
			else
				base = 'A';
			_putchar((*s - base + 13) % 26 + base);
			r++;
		}
		else
		{
			_putchar(*s);
			r++;
		}
	}
	return (r);
}

