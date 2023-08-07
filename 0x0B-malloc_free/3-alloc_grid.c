#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: NULL on failure, if width or height is 0, or negative, return NULL
 * This program conforms to the betty documentation style
 **/

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
{
	return (NULL);
}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
{
	return (NULL);
}

	for (a = 0; a < height; a++)
{
	grid[a] = (int *)malloc(width * sizeof(int));
	if (grid[a] == NULL)
{
	for (b = 0; b < a; b++)
{
	free(grid[b]);
}
	free(grid);
	return (NULL);
}

	for (b = 0; b < width; b++)
{
	grid[a][b] = 0;
}
}
	return (grid);
}
