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
	int last_digit; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("The last digit of %d is greater than 5\n", n);
	}
	else
	if (last_digit > 0)
	{
		printf("The last digit of %d is 0\n", n);
	}
	else
	{
		printf("The last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
