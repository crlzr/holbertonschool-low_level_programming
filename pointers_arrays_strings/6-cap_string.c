#include "main.h"

/**
 *
 *
 *
 */

char *cap_string(char *str)
{
	char *ptr = str;

	while( *ptr != '\0')
	{
	
		if(*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	
	return (str);
}

