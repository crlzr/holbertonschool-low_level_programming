#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * by src to the buffer pointed to by dest
 * @dest: pointer, return value
 * @src: src holds the string that must be copied
 * Return: the pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
