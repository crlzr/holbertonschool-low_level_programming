#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter = 'a';

for (; letter <= 'z'; letter++)
{
	_putchar(letter);
}
	_putchar('\n');
}
