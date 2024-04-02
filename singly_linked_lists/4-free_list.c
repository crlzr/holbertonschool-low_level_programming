#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees list_t
 * @head: pointer to head
 * Return: 0
 */

void free_list(list_t *head)
{
	free(head);
}
