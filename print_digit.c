#include "main.h"

int print_digit(long n, int base)
{
	int r = 0;
	char *symbols = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		r += print_digit(n / base, base);
		return (r + print_digit(n % base, base));
	}
}

