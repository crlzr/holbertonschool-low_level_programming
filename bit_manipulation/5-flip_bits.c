#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number
 *             to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/* Increment count if the least significant bit is set */
		count += xor_result & 1;
		/* Right shift to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}

