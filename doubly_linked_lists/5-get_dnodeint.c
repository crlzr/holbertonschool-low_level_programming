#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth element
 * @index: element
 * @head: pointer to head
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	if (head == NULL || current == NULL)
	{
		return (NULL);
	}

	while (i < index && current != NULL)
	{
		i++;
		current = current->next;
	}
	return (current);
}
