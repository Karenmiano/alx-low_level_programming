#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate, that wll come second
 * Return: concatenated string which will be 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = src[j];
	return (dest);
}
