#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer containing
 * a copy of the string that it receives
 * @str: string to be read from
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *ptr, *start;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	start = ptr;
	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = '\0';
	return (start);
}
/**
 * _strlen - function that calculates the length of a string
 * @s: string to be checked
 * Return: i, length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0;)
		i++;
	return (i);
}
