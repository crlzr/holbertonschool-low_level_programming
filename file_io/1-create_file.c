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
	char *buffer = malloc(strlen(text_content) + 1);
	size_t bytes_written;

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);

	if (filedescriptor == -1)
	{
		return (-1);
	}
	
	bytes_written = write(filedescriptor, buffer, strlen(buffer));

	if (bytes_written == -1)
	{
		return (-1);
	}
	
	close(filedescriptor);
	free(buffer);
	return(1);
}	
