#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array and initializes
 * the array with specified character
 * @size: size of array
 * @c: character to initialize all elements of the array
 * Return: pointer to the array or null depending
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
