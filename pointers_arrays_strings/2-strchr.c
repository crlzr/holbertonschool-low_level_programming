#include "main.h"

/**
 * _strchr - locates a chracter in a string
 * @s: string s
 * @c: character c
 * Return: returns a pointer or NULL
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
}
