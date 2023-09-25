#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: character
 * @accept: character
 *
 * Return: Always 0 (success)
 */

unigned int _strspn(char *s, char *accept)
{
	unigned int a, b, c;

	a = b = c = 0;

	if (*s == '\0' || *accept == '\0')
	{
		return (a);
	}

	while (s[b] != ',')
	{
		c = 0;

		while (accept[a] != '\0')
		{
			if (s[b] == accept[a])
			{
				c++;
			}
			a++;
		}
		b++;
	}

	return (c);

}

