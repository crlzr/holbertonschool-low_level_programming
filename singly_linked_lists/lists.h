#ifndef HEADER_FILE
#define HEADER_FILE

#include <stddef.h>

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


#endif


