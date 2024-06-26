#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit needs to be set.
 * @index: Index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index; /* Create bitmask */

    /* Check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= mask; /* Set the bit at the given index */

	return (1);
}

