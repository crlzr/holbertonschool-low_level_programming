#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char 1
 * @accept: char 2
 * Return: unsigned int - length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ii = 0;
	unsigned int jj;
	unsigned int count = 0;

	while (s[ii] != '\0')
	{
		jj = 0;
		while (accept[jj] != '\0')
		{
			if (s[ii] == accept[jj])
			{
				count++;
				break;
			}
			jj++;
		}
		if (accept[jj] == '\0')
		{
			break;
		}
		ii++;
	}
	return (count);
}
