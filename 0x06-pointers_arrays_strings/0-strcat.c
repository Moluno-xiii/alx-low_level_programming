#include "main.h"

/**
 * _strcat - Functiton that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (a);
}
