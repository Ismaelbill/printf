#include "main.h"

/**
 * print_char - function prints a character
 * @c: character
 * Return: 'c'
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}

