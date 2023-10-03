#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function returns a pointer to a 2 dimensional
 * array of integers
 * @width: width size
 * @height: height size
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **res;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = (int **)malloc(height * sizeof(int *));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		res[a] = (int *)malloc(width * sizeof(int));
		if (res[a] == NULL)
		{
			free(res);
			for (b = 0; b <= a; b++)
			{
				free(res[b]);
			}
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			res[a][b] = 0;

	return (res);
}
