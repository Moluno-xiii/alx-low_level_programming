#include "main.h"

/**
 * _strncat - Function to concatenate two strings
 * @dest : first string
 * @src : second string
 * @n : input value
 *
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
