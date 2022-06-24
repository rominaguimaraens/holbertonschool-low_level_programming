#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the grid space
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
