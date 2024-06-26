#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int filedescriptor;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	filedescriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	write(filedescriptor, text_content, i);

	if (filedescriptor == -1)
	{
		return (-1);
	}
	return (1);
}

