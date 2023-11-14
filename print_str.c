#include "main.h"

/**
 * print_str - function prints string
 * @str: pointer
 * Return: number of characters(str)
 */

int print_str(char *str)
{
	int r = 0;

	while (*str)
	{
		write(1, str, 1);
		r++;
		str++;
	}
	return (r);
}
