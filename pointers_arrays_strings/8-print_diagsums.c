#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array of input int
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int mainDiagonalSum;
	int antiDiagonalSum;
	int i;

	i = 0;
	mainDiagonalSum = 0;
	antiDiagonalSum = 0;

	while (i < size)
	{
		mainDiagonalSum = mainDiagonalSum + a[i];
		a = a + size;
		i++;
	}

	a = a - size;
	i = 0;

	while (i < size)
	{
		antiDiagonalSum = antiDiagonalSum + a[i];
		a = a - size;
		i++;
	}
	printf("%d, %d\n", mainDiagonalSum, antiDiagonalSum);
}
