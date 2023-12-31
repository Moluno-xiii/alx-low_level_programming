#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy
 *
 * Return: dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
