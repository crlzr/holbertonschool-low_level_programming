#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
