#include <stdio.h>

/**
 * main - prints all possible combos of single-digit numbers
 * Return: Always 0 (success)
 */

int main(void)

{

int number = 48;

while (number < 58)
{
	putchar(number);

	putchar(',');

	putchar(' ');
	number++;
}
	putchar('\n');
	return (0);
}
