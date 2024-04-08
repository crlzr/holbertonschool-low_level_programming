#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		filename = open("text_content", "w");
	}
	return (1);
}
