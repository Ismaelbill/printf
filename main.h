#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);
void str_func(char *s, int *j, int *r, int *i);
void char_func(char c, int *r, int *i);
void percent_func(int *r, int *i);

#endif
