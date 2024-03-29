#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: arry with elements
 * @size: number of elements in the array
 * @cmp: pointer to a function
 * Return: int_index: returns index of first element for which
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
