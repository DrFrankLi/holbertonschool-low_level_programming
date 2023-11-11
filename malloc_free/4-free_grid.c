#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for the 2D array
 * @grid: the 2d array
 * @height: the height of the grid
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
