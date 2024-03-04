#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s: memory area
 * @b: the byte to fill
 * @n: the number of bytes to fill
 * Return: pointer to memory area of s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int length = 0;
	for (length = 0; length < n; length++)
	{
		s[length] = b;
	}
	return (s);
}
