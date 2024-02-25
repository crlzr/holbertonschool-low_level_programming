#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 without 2 and 4
 */


void print_most_numbers(void)
{
char c = 48;

for (c = 48; c <= 57; c++)
{
	if (c != 50 && c != 52)
	_putchar (c);
}
	_putchar ('\n');
}
