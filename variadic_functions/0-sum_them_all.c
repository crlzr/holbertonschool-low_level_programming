#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of parameters
 * @n: the passed in parameters
 * Return: n == 0 return 0, otherwise the sum.
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
