#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: start address of the array
 * @size: size of the array
 * @cmp: pointer to the actual function that will search for
 * the desired integer
 * Return: index of the integer if found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
