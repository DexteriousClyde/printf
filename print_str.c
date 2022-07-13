#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_str - prints a string
 * @list: string to be printed
 * Return: len of string
 */

int print_str(va_list list)
{
	int len, i;
	char *s;

	len = str_len(list);
	s = va_arg(list, char *);
	if (s == NULL)
		return (0);
	else
	{
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	return (len);
}
