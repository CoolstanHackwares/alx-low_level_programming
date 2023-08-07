#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created by 3-alloc_grid.c
 * @grid: The address of the two dimensional grid
 * @height: The height of the grid
 * This program conforms to the betty documentation style
 **/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
{
	free(grid[a]);
}

	free(grid);
}
