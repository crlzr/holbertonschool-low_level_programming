#include "main.h"


/**
 * puts_half - prints the second half of the string
 * @str: pointer that stores char
 */

void puts_half(char *str)
{
	int length = 0; 
	int n;

	while (str[length] != 0)
	{
		length++;
	}

	for (n = length / 2; n < length; n++)
	{
		_putchar(str[n]);
	}
}
