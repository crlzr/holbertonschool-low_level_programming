#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

/**
 * struct format - ties a data type to a corresponding function
 * @type: the data type
 * @f: the function
 *
 * Description: this struct stores a char with the corresponding function
 *              that prints the data type specified with the char
 */

void print_all(const char * const format, ...);

struct format
{
	char type;
	void (*f)(va_list list);
};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
