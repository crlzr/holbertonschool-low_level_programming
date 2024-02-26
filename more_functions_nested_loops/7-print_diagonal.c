#include "main.h"

/**
 * print_diagonal - lines
 * @n: int
 */

void print_diagonal(int n)
{
	int row = 0;
	int col = 0;

	if (n > 0)
	{	
		while (row < n)
		{
			col = 0;		
			while (col < row)
			{
				_putchar(' ');
				col = col + 1;
			}
			_putchar('\\');
			_putchar('\n');
			row = row + 1;
		}	

	}	
	else
	{
		_putchar ('\n');
		
	}
}
