#include "main.h"

/**
 *  _isalpha - checks if int c is a letter
 * @c: an int that is passed from the main file
 * Return: 0 (success)
 */


int _isalpha(int c)

{
if ((c >= 97  && c <= 122) || (c >= 65 && c <= 90))
	return (1);

else
	return (0);
}
