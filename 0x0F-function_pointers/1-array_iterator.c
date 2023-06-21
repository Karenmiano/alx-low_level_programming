#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes the given function on each element of an array
 * @array: start address of the array
 * @size: size of the array
 * @action: function to be executed
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
