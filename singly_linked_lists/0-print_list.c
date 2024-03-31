#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - function to print the elements of list_t
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
