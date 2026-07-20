#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees memory held by a 2d array
 * @grid: the 2d arrays column
 * @height: rows of the array
 *
 * Return:
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
