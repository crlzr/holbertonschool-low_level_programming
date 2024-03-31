#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - function to print the elements of list_t
 * @list_t: linked list with elements to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	printf("\n");
	return (i);
}
