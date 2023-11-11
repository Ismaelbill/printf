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

