#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit needs to be cleared.
 * @index: Index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	/* Check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bitmask = 1UL << index; /* Create bitmask with bit at index set to 1 */
	*n &= ~bitmask; /* Clear the bit at the given index */

	return (1);
}

