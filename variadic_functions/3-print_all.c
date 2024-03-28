#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - function to print char
 * @list: list with specifiers
 * Return: void
 */

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - function to print int
 * @list: list with specifiers
 * Return: void
 */

void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - function to print float
 * @list: list with specifiers
 * Return: void
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - function to print a string
 * @list: list with specifiers
 * Return: void
 */

void print_s(va_list list)
{
	char *str;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		printf("nil");
	}
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: strings
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int j = 0;

	struct format formatx[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_float},
		{'s', print_s}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == formatx[j].type)
			{
				formatx[j].f(list);

				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

