#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;

	if (b == NULL) /*looking b contains something*/
		return (0);
	for (i = 0; b[i] != '\0'; i++) /*verifying the sting only have 0 and 1*/
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		sum = (sum * 2) + (b[i] - '0');
	}

	return (sum);
}
