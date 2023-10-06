#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function allocates memory for an array using malloc
 * @nmemb: numb of elemet
 * @size: size of array
 *
 * Return: Always 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, length;
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	length = nmemb * size;

	result = malloc(length);

	if (result == NULL)
		return (NULL);

	for (a = 0; a < length; a++)
		result[a] = 0;

	return (result);
}
