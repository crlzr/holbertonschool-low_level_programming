#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - check the code
 * @ac: argc
 * @av: argv
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int open1, open2, read1, write1, close1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open1 = open(av[1], O_RDONLY);
	if (open1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	open2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (open2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(open1);
		exit(99);
	}
	while ((read1 = read(open1, buffer, 1024)) >= 1)
	{
		write1 = write(open2, buffer, read1);
		if (write1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (read1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close1 = close(open1);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", open1);
		exit(100);
	}
	close1 = close(open2);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", open2);
		exit(100);
	}
	return (0);
}

