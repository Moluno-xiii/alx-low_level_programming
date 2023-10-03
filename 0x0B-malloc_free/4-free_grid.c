#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function frees a 2 dimensional grid previously created
 * by the alloc_grid function
 * @grid: 2 dimensional array
 * @height: height size
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
