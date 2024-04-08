#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescriptor;
	int i = 0;
	int written;

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

	filedescriptor = open(filename, O_WRONLY | O_APPEND);

	if (filedescriptor == -1)
	{
		return (-1);
	}

	written = write(filedescriptor, text_content, i);

	if (written == -1)
	{
		return (-1);
	}

	return (1);
}

