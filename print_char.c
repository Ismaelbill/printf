#include "main.h"

int print_char(int c)
{
	return (write(1, &c, 1));
}

