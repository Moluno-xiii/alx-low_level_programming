#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters in second string to be added
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c = 0, length = 0;
	char *result;

	for (a = 0; s1 != NULL && s1[a] != '\0'; a++)
		length++;

	a = 0;

	for (b = 0; s2 != NULL && s2[b] != '\0'; b++)
	{
	}

	if (n >= b)
	{
		c = b;
		length += b;
	} else
	{
		c = n;
		length += n;
	}

	length++;

	result = malloc(sizeof(*result) * length);

	if (result == NULL)
		return (NULL);

	for (a = 0; s1 != NULL && s1[a] != '\0'; a++)
		result[a] = s1[a];

	for (b = 0; s2 != NULL && b < c; b++)
	{
		result[a] = s2[b];
		a++;
	}

	result[a] = '\0';
	return (result);
}
