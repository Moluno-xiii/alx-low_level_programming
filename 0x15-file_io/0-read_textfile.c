#include "main.h"

/**
 * read_textfile - Function reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters read and output
 * Return: Always 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readBytes, writeBytes, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	readBytes = read(fd, buffer, letters);
	writeBytes = write(STDOUT_FILENO, buffer, readBytes);

	if (fd == -1 || readBytes == -1 || writeBytes == -1
			|| writeBytes != readBytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (writeBytes);
}
