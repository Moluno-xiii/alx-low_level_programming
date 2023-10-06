#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: size
 *
 * Return: Always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);

	return (result);
}
