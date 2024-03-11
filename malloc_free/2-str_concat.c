#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fail, otherwise concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int size;
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	size = (i + j + 1);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		s[k] = s1[k];
		k++;

	}

	while (k < size - 1)
	{
		s[k] = s2[k - i];
		k++;
	}

	s[size - 1] = '\0';

	return (s);
}
