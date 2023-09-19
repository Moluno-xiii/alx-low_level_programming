#include "main.h"

/**
 * _strlen - Function returns the length of a string
 * @s: string
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
