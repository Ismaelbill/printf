#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int _printf(const char *format, ...);
int print_format(char spec, va_list args);
int print_char(int c);
int print_digit(long n, int base);
int print_hexa_uppercase(unsigned long n);
int print_str(char *str);

#endif
