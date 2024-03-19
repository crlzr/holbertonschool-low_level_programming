#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @argv: argument vector
 * @argc: argument counter
 * Return: 0 on success
 *
 */


int main(int argc, char *argv[])
{
	int result; 
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
		return (1);
	}

	operation = get_op_func(argv[2]);
	result = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	
	return (0);
}
