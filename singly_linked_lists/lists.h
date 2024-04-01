#ifndef HEADER_FILE
#define HEADER_FILE

#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_node - struct re singly linked list
 * @str: strings to be printed
 * @len: length of the data
 * @next: points to the next node
 */
typedef struct list_node
{
	char *str;
	int len;
	struct list_node *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif


