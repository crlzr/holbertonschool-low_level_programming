#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - function that creates an array of chars
 * @size: siez of array from main
 * @c: char to load into memory
 * Return: NULL if size = 0 or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
