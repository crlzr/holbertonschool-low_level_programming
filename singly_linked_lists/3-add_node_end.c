#include <strings.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - function to add a new node at the end
 * @str: string to be duplicated
 * @head: pointer to first node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = 0;
	list_t *last_node;
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

	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
