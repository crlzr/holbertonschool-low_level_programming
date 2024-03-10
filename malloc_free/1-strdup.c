#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: the string passed in
 *
 * Return: pointer to first elem of dup string.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0' && *str != 0)
	{
		i++;
	}

	/**
	 * Don't forget to include the \0 end-of-string
	 * Also, since we started from index 0, we need to +1
	 * printf("To allocate - %d\n", i + 1);
	 */

	dup = malloc(i + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		dup[i] = str[i];

		i = i + 1;
	}
	dup[i] = '\0';

	return (dup);
}
