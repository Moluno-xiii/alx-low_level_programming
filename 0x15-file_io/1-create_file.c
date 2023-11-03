#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: name of the file to create
 * @text_content: string to be written to file
 * Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, writeBytes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeBytes = write(fp, text_content, length);

	if (fp == -1 || writeBytes == -1)
		return (-1);

	close(fp);
	return (1);
}
