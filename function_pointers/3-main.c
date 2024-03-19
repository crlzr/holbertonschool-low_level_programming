#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function 
 * Return: 0 on success
 *
 */


int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
		return (1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
		return (1);
	}
}
