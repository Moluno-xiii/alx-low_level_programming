#include "main.h"

/**
 * _memset - Function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer
 * @b: value
 * @n: number of bytes
 *
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
