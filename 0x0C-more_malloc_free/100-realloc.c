#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: the memory block to be adjusted
 * @old_size: former size
 * @new_size: new size
 * Return: pointer to the adjusted block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reloc, *temp;
	unsigned int i;

	if (ptr == NULL)
	{
		reloc = malloc(new_size);
		if (reloc == NULL)
			return (NULL);
		return (reloc);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	reloc = malloc(new_size);
	if (reloc == NULL)
		return (NULL);
	temp = (char *)ptr;
	for (i = 0; i != old_size && i != new_size; i++)
	{
		reloc[i] = temp[i];
	}
	free(ptr);
	return (reloc);
}
