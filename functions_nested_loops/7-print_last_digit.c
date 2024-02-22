#include "main.h"

/**
 * function print_last_digit(int): prints the last digit of a number
 * @number: integer that refers to main.h
 * Return: last digit of number
 */

int print_last_digit(int number)
{
int last_digit = number % 10;
{
	_putchar('0' + last_digit);
	return (last_digit);
}
}
