#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by nl
 * @separator: pointer to string to be printed bw numbers
 * @n: number of strings to be passed in
 * Return: separator == 0, print nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("nil");
		}

		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
