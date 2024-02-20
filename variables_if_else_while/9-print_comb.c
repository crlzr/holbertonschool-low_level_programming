#include <stdio.h>

/**
 * main - prints all possible combos of single-digit numbers
 * Return: Always 0 (success)
 */

int main(void)

{

int number = 48;

for (; number < 58; number++)
{
	putchar(number);

if (number < 57)
{
	putchar(44);

	putchar(32);
}
}
	putchar('\n');
	return (0);
}
