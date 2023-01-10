#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocate for the frid
 * create by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return (0);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
