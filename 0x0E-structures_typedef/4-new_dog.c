#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct dog
 * @name: name to be stored
 * @age: age
 * @owner: owner
 * Return: pointer to this struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pop;

	pop = malloc(sizeof(dog_t));
	if (pop == NULL)
	{
		return (NULL);
	}
	pop->name = malloc(_strlen(name) + 1);
	if (pop->name == NULL)
	{
		free(pop);
		return (NULL);
	}
	_strcpy(pop->name, name);
	pop->owner = malloc(_strlen(owner) + 1);
	if (pop->owner == NULL)
	{
		free(pop->name);
		free(pop);
		return (NULL);
	}
	_strcpy(pop->owner, owner);
	pop->age = age;
	return (pop);
}
/**
 * _strcpy - copies a string into another location
 * @dest: destination of the copy
 * @src: source of the copy
 * Return: pointer to the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
