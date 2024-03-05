#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: any given number
 * Return: 1 if factorial is 0 or more, 0 if < 0
 */

int factorial(int n)
{
	if (n  < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
