#include "main.h"

/**
 * _strpbrk - Function that searches for any of a set of bytes
 * @s: string
 * @accept: byte
 *
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
