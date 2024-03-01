#include "main.h"

/**
 * string_toupper - changes lower to uppercase letters
 * @str: return
 * Return: str
 */


char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
