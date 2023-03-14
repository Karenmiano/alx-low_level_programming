#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings and stores
 * the result in a new memory location
 * @s1: first string
 * @s2: comes after s1
 * Return: result the two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = malloc(sizeof(char) * (_strlen(s1) +  _strlen(s2) + 1));
	if (concat == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
}
/**
 * _strlen - finds the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}

