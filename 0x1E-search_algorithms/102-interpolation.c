#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - searches for an element using interpolation
 * search
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value of element being searched
 * Return: index of element found, -1 if array or element doesn't exist
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, pos;

	if (array)
	{
		while (lo <= hi)
		{
			pos = lo
				  + (((double)(hi - lo) / (array[hi] - array[lo]))
				     * (value - array[lo]));
			if (pos > size - 1)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);

			if (array[pos] < value)
				lo = pos + 1;

			else
				hi = pos - 1;
		}
	}
	return (-1);
}
