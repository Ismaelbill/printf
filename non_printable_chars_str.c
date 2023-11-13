#include "main.h"

/*char	_putchar(char c)
{
	return(write(1, &c, 1));
}*/

int	printable_chars(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

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

