#include "main.h"

/**
 * _puts - write a function that prints a string, followed by new line
 * @str: char
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
