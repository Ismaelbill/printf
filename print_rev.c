#include "main.h"

/**
 * _p_rev - function reverses a string recursively and prints it
 * @s: string
 */

void _p_rev(char *s)
{
	if (!s || !*s)
		return;
	_p_rev(s + 1);
	_putchar(*s);
}

/**
 * print_rev - function call _p_rev to reverse the string,
 * and returns the length of the string
 * @str: string
 * Return: returns the length of the string
 */

int print_rev(char *str)
{
	int r = 0;


	if (str == NULL)
	{
		str = "(null)";
		print_str(str);
		return (6);
	}


	while (str[r])
		r++;

	_p_rev(str);
	return (r);
}

