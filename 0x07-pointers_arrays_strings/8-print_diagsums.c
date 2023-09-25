#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: array size
 *
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int x;
	long int y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		z = z + *(a + x * size + x);
		y = y + *(a + x * size - x);
	}

	printf("%ld, %ld\n", z, y);
}
