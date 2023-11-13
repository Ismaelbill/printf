#include "main.h"

/**
 * printable_chars - differentiate between printable chars
 * and none-printable chars
 * @c: checker
 * Return: 1 if printable, 0 if non-printable
 */

int	printable_chars(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/**
 * non_printable_chars - prints printable chars and
 * escapes non-printable chars in hex format
 * @s: string
 * Return: total count of the characters processed
 */

int	non_printable_chars(char *s)
{
	int i = 0, r = 0;

	while (s[i])
	{
		if (printable_chars(s[i]) == 1)
			r += print_char(s[i]);
		else
		{
			r = write(1, "\\x", 2);
			r += print_char("0123456789ABCDEF"[s[i] / 16]);
			r += print_char("0123456789ABCDEF"[s[i] % 16]);
		}
		i++;
	}
	return (r);
}

