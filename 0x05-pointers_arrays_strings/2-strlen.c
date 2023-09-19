#include "main.h"

/**
 * swap_int - Function returns the length of a string
 * @a: string
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
