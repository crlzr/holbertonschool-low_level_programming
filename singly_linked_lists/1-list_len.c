#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - function that returns no. of elements in list
 * @h: pointer to linked list
 * Return: no. of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	int i = 0;

	while (h != NULL)
	{
		count++;
		i++;
		h = h->next;
	}
	return (count);
}
