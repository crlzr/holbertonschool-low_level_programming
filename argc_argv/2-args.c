#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints all arguments it receives 
 * on new line
 * @argc: argument counter in command line
 * @argv: argument vector (strings)
 * Return: all arguments it receives
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
