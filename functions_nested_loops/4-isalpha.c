#include "main.h"

/**
 * function _isalpha - checks if int c is a letter
 * @c: an int that is passed from the main file
 * Return: 0 (success)
 */


int _isalpha(int c)

{
if ((c >= 97  && c <= 122) || (c >= 90 && c <= 65))
	return (1);

else
	return (0);
}
