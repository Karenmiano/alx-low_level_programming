#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory that had been created for a 2d
 * array
 * @grid: pointer to the first array
 * @height: number of arrays of the 2d array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
