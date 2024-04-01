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
	list_t *new_node;
	int i = 0;
	int j = 0;

	new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	
	while (head != NULL)
	{
		while (str[j] != '\0')
		{
			new_node->str = strdup(str);
			j++;
		}
	i++;
	}

	new_node->len = j;

	new_node->next = NULL;

	return (new_node);
}
