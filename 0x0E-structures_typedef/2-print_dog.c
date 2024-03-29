#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the info stored in a struct dog
 * @d: address of the struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
}
