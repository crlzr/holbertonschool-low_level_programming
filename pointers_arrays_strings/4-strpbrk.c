#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string s 1
 * @accept: string 2
 * Return: unsigned int - length
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int comparecount = 0;

	while (s[count] != '\0')
	{
		comparecount = 0;
		while (accept[comparecount] != '\0')
		{
			if (s[count] == accept[comparecount])
			{
				return (s + count);
			}
			comparecount++;
		}
		count++;
	}
	return ('\0');
}
