#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the chaacter
 * @c: char
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
