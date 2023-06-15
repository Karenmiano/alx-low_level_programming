#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that stores an array of integers in
 * memory
 * @min: the minimum value
 * @max: the maximum value
 * Return: start address of the array
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
