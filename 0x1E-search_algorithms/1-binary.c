#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for value in sorted array using binary
 * search
 * @array: pointerS to array
 * @size: number of elements in array
 * @value: the value to be searched
 * Return: index of value found, - if value or array in doesn't exist
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, i;

	if (array)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i != high)
					printf(", ");
				else
					printf("\n");
			}
			mid = low + (high - low) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	return (-1);
}
