#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function creates an array of integers
 * @min: starting number
 * @max: end number
 *
 * Return: Always 0 (success)
 */
int *array_range(int min, int max)
{
	int a, length;
	int *result;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	result = malloc(sizeof(int) * length);

	if (result == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		result[a] = min++;

	return (result);
}
