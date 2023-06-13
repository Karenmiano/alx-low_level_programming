#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a sized 2d array and initializes
 * it to 0
 * @width: number of elements per array
 * @height: number of arrays
 * Return: address of first array
 */
int **alloc_grid(int width, int height)
{
	int **ptrr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptrr = malloc(height * sizeof(int *));
	if (ptrr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptrr[i] = malloc(width * sizeof(int));
		if (ptrr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			ptrr[i][j] = 0;
		}
	}
	return (ptrr);
}
