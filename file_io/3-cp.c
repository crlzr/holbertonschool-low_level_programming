#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int bytes_written;
	char buffer[1024];
	int size = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
		exit(99);
	}

	while (size != 0)
	{
		size = read(file_from, buffer, 1024);
		if (size < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_written = write(file_to, buffer, size);

		if (bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_from);
		exit(100);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		close(file_to);
		exit(100);
	}
	return (0);
}

