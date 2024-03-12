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
	int size = max - min + 1;
	int i = 0;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
