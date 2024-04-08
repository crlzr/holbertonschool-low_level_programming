#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a textfile and prints to stdout
 * @filename: pointer to file
 * @letters: number of letter that should be read and printed
 * Return: actula number of lettters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	size_t  bytes_read;
	size_t bytes_written;
	char *buffer;

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		return (0);
	}
	
	if (filename == NULL)
	{
		return (0);
	}

	filedescriptor = open(filename, O_RDONLY);

	if (filedescriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(filedescriptor, buffer, letters);
	

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(filedescriptor);
	free (buffer);

	return (bytes_written);
}
