#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_format(char spec, va_list args);
int print_char(int c);
int print_digit(long n, int base);
int print_hexa_uppercase(unsigned long n);
int print_str(char *str);
int printable_chars(char c);
int non_printable_chars(char *s);
void _p_rev(char *s);
int print_rev(char *str);
int print_rot13(va_list args);

#endif
