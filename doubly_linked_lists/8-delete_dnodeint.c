#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to pointer to head
 * @index: position of node to be deleted
 * Return: 1 if succeeded
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i = 0;

	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0) /* starting point of list */
	{
	*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
