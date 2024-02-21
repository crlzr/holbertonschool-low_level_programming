#include "main.h"

/**
 * main - prints the alphabet
 *
 * Return: Always 0.
 */

int main(void)
{
char letter = 'a';

for (; letter <= 'z'; letter++)
{
	_putchar(letter);
}
	_putchar('\n');
	return (0);
}
