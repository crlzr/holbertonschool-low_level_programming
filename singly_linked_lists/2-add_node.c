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
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
