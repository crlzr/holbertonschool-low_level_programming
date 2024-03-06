#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints its own name
 * @argc: argument counter in command line
 * @argv: argument vector (strings)
 * Return: the name of the program
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
