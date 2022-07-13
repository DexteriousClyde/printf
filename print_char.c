#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @list: input of char
 * Return: 1
 */

int print_char(va_list list)
{
	int i, len;
	char *c;
	
	c = va_arg(list, char *);
	if (c == 0 || c == NULL)
		return (0);
	len = str_len(list);
	for (i = 0; i < len; i++)
	{
		_putchar(c[i]);
	}
	return (1);
}
