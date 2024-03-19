#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by nl
 * @separator: pointer to string to be printed bw numbers
 * @n: number to be passed in 
 * Return: separator == 0 return 0, otherwise the number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

       	va_list num;
	unsigned int i;

        va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(num, int)); 
	}

	if (i < n - 1 && separator != NULL) 
	{
		printf("%s", separator);
	}
	va_end(num);
}
