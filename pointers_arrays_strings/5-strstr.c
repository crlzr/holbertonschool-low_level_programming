#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: pointer to beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int outerLoop = 0;

	while (haystack[outerLoop] != '\0')
	{
		int innerLoop = 0;

		while (needle[innerLoop] != '\0' && haystack[outerLoop + innerLoop]
		== needle[innerLoop])
		{
			innerLoop++;
		}

		if (needle[innerLoop] == '\0')
		{
			return (&haystack[outerLoop]);
		}
		outerLoop++;
	}
	return ('\0');
}
