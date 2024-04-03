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

	/** while (index != 0)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		index--;
	}
	return (head);
	*/

	int count; 

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head == NULL)
	{
		return (NULL);
	}
	else
		return (head);
	
}
