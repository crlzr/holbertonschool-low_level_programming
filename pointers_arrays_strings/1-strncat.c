#include "main.h"

/**
 * _strncat - concatenate two strings, use n
 * @src: source string
 * @dest: destination string
 * @n: n bytes from src
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
