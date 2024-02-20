#include <stdio.h>

/**
 * main - print all single digit numbers 0-9, new line
 * Return: Always 0 (success)
*/

int main(void)

{
int number = 0;

while (number < 10)

{
	putchar(number);
	number++;
}
	putchar('\n');
	return (0);
}
