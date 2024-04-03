#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a node at a given pos
 * @h: pointer to pointer to head
 * @idx: index of the list where new node shall be added
 * @n: the data
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
		current = current->next;
	}

	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}

	new_node->next = current->next;
	new_node->prev = current;

	return (new_node);
}
