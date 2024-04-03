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

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*h == NULL)
	{
		current = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}

	if (idx = 0)
	{
		new_node->next = current;
		(*h)->prev = new_node;
		*h = new_node;
	}
	
	for (i = 0; i < (idx - 1) && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node->prev = current; 
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);

}
