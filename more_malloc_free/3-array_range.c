#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: min>max & malloc fails return NULL
 * or pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int size = max + 1;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
