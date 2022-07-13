#include "main.h"

/**
 * str_len - count length of str
 * @str: string
 * Return: length
 */

int str_len(va_list list)
{
	int len;
	char *s;

	len = 0;
	s = va_arg(list, char *);
	if (s == NULL || s == 0)
		return (0);
	else
	{
		for  (len = 0; s[len] != '\0'; len++)
			;
	}
	return (len);
}
