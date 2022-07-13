#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct type
{
	char *ch;
	int (*f)(va_list);
} type_t;

int str_len(va_list list);
int print_char(va_list list);
int print_str(va_list list);
int print_mod(va_list list);
int print_float(va_list list);
int print_double(va_list list);
int print_unsint(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
