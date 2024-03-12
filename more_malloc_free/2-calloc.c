#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: no. of elements you want to to allocate memory for in array
 * @size: specifies size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}
