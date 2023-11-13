#include "main.h"

/**
 * print_hexa_uppercase - function prints hex decimal
 * @n: number
 * Return: 'n' in a hex decimal form
 */

int print_hexa_uppercase(unsigned long n)
{
	int r = 0;
	char *symbols = "0123456789ABCDEF";

	if (n < 16)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		r += print_hexa_uppercase(n / 16);
		return (r + print_hexa_uppercase(n % 16));
	}
}

