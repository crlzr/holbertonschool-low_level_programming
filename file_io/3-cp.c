#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[]) 
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, 1024)) > 0) {
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read) {
			dprintf(STDERR_FILENO, "Error: Write error to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1) {
		dprintf(STDERR_FILENO, "Error: Read error from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1 || close(file_to) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		exit(100);
	}

	return 0;
}

