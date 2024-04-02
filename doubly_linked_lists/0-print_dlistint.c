#include "lists.h"
#include <stdio.h>
#include <strings.h>
#include <stddef.h>

/**
 * print_dlistint - function to print all elements of list
 * @h: head pointer
 * Return - no. of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
