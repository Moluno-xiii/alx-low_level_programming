#include "main.h"

/**
 * _strchr - Function locates a charater in a string
 * @s: string
 * @c: character
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return (s);
	}

	return (s + 1);
}
