#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c:int checks if letter is lower or uppercase
 * Return: 1 if uppercase, 0 if lowercase
 */


int _isupper(int c)
{
if (c >= 97 && c <= 122)
{
	return (0);
}
else if (c >= 65 && c <= 90)
{
	return (1);
}
	return (0);
}
