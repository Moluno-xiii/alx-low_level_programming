#include "main.h"

/**
 * _strstr - Function finds the first occurence of the substring in the
 * string haystack
 * @haystack: string
 * @needle: substring
 *
 * Return : Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}

		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
	}
	return (NULL);
}
