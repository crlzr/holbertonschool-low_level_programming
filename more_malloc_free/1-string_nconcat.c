#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max number of chars from s2 that to conc. to s1
 * Return: pointer to start of s1+s2 or NULL if it fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	p = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
		return (p);
}
