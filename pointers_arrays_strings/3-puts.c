#include "main.h"

/**
 * _puts - write a function that prints a string, followed by new line
 * @str: char
 */


void _puts(char *str)
{
	int s = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
