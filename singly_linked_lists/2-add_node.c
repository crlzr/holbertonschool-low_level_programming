#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add a new node at the beginning of list_t
 * @head: pointer to pointer of head
 * @str: string to be duplicated
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(new_node->str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
