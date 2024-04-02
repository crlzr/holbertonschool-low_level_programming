#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_dnodeint - a function to add new node at the beginning of list
 * @n: value
 * @head: pointer to head
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->prev = NULL;

	h = *head;

	if (h != NULL && h->prev != NULL)
	{
		h = h->prev;
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
