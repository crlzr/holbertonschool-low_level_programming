#include <stdio.h>

/**
 * main - print all single digit numbers 0-9, new line
 * Return: Always 0 (success)
*/

int main(void)

{
int number = 0;

for (; number < 10; number++)

{
	putchar(number);
}
	putchar('\n');
	return (0);
}
