#include "dog.h"
/**
 * init_dog - initializes a struct dog
 * @d: address of the struct
 * @name: name to initialize name member
 * @age: age
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
