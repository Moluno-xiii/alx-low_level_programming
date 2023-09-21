#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: first value
 * @src: second value
 * @n: third input value
 *
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
