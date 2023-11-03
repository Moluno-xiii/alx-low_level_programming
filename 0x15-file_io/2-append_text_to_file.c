#include "main.h"

/**
 * append_text_to_file - Function appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to be appended
 *
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t deez;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count])
			count++;

		deez = write(fd, text_content, count);
		if (deez == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
