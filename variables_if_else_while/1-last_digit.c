#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for code
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("The last digit of %d is greater than 5\n", n);
	}
	if (n % 10 > 0)
	{
		printf("The last digit of %d is 0\n", n);
	}
	if (n % 10 < 6 && n % 10 > 0)
	{
		printf("The last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
