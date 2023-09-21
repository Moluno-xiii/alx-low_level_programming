#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else if (*s1 == '\0')
	{
		return (-*s2);
	}
	else if (*s2 == '\0')
	{
		return (*s1);
	}

	return (0);
}
