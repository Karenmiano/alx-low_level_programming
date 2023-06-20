#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees a struct dog(dog_t)
 * @d: address of the struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
