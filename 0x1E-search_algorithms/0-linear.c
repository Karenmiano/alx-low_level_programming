#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: the value to be searched
 * Return: index of value if found, -1 if array in NULL or
 * value doesn't exist
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
            return (i);
        }
    }
    return (-1);
}
