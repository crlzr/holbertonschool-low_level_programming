#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints the numbers of arguments
 * @argc: argument counter in command line
 * @argv: argument vector (strings)
 * Return: the number of arguments passed in
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
