#include "lists.h"
#include <stdio.h>
#include <strings.h>
#include <stddef.h>

/**
 * print_dlistint_len - function to print all elements of list
 * @h: head pointer
 * Return: no. of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t i = 0;
	int len;

        while (h != NULL)
        {
                i++;
		len = len + 1;
                h = h->next;
        }

        return (len);
}
