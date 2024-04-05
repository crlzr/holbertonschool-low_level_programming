#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve, starting from 0
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* Überprüfen, ob der Index innerhalb des gültigen Bereichs liegt */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Bit an den Index 0 verschieben und Wert des Bits extrahieren */
	bit_value = (n >> index) & 1;

	/* Wert des Bits zurückgeben */
	return (bit_value);
}

