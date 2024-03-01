#include "main.h"
/**
 *leet - changes letters with numbers
 * @s: string to be modified
 * Return: modified string s
*/

char *leet(char *s)
{
	int i = 0;
	int j = 0;

	char src[] = "aAeEoOtTlL";
	char dest[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{

			if (s[i] == src[j])
			{
				s[i] = dest[j];
			}
		j++;
		}
	i++;
	}
	return (s);
}
