#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates sized memory
 * @b: number of bytes to allocate
 * Return: address of the newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
