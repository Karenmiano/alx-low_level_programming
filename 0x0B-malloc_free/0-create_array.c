#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a sized array and initializes it with
 * specified character
 * @size: size of array to be created
 * @c: character to be used
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
