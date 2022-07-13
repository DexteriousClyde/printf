#include "main.h"

/**
 * _printf - Works like printf
 * @format: specifier
 * Return: lenght of printed string
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j, len;

	type_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_mod},
		{NULL, NULL},
	};
	va_start(list, format);
	if (format == NULL || format == 0)
		return (-1);
	i = 0;
	len = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j]).ch)
			{
				len += ops[j].f(list);
			}
			j++;
		}
		i++;
	}
	_putchar('\0');
	len++;
	va_end(list);
	return (len);
}
