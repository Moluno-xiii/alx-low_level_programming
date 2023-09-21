#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: array
 * @n: size of array
 *
 * Return: Always 0 (success)
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
