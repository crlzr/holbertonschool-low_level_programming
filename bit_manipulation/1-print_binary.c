#include "main.h"
#include <stdio.h>

/**
 *print_binary - convert decimal to binary
 *@n: the decimal number
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, ban = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar(1 + '0');
			ban++;
		}
		else if (ban != 0)
		{
			_putchar(0 + '0');
		}
	}
		if (!ban == 0)
			_putchar(0 + '0');
}
