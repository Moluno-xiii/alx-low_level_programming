#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (s1 != s2)
		i = *s1 - *s2;

	return (i);
}
