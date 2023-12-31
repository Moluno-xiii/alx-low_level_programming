#include "main.h"

/**
 * _memcpy - Function copies n bytes from memory area src to memory area
 * dest
 * @dest: memory area
 * @src: memory area
 * @n: number of byte
 *
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
