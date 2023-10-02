#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: character to confirm if present
 *
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i, count = 0;

	while (s[count] != '\0')
		count++;

	for (i = 0; i <= count; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
