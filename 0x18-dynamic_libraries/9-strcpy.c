#include "main.h"
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
