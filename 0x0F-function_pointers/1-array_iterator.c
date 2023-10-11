#include "function_pointers.h"

/**
 * array_iterator - Function that  executes a function given as
 * a parameter on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
