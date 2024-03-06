#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter in command line
 * @argv: argument vector (strings)
 * atoi - converts a char string to an integer
 * Return: the sum or ERROR
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	
	printf("%d\n", mul);
	return (0);
}
