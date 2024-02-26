#include "main.h"

/**
 * print_square - prints a square
 * @size: int
 */

void print_square(int size)
{
	char row = 0;
	char col = 0;

	if (size > 0)
	{
		while (row < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}

		_putchar('\n');
		row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
