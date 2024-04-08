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
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);

	if (filedescriptor == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(filedescriptor);
		return (1);
	}
	
	bytes_written = write(filedescriptor, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(filedescriptor);
		return (-1);
	}
	
	return(1);
}	
