#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - function to sum all data (n) of list
 * @head: head pointer to first node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
	{
	return (0);
	}

	while (current_node != NULL)
	{
		sum = sum + current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
