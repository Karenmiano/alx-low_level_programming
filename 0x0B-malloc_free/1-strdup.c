#include "main.h"
#include <stdlib.h>
/**
 * _strdup - stores a copy of a string in memory
 * @str: the string to read from
 * Return: pointer to the copy
 */
char *_strdup(char *str)
{
	char *strr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i += 1;
	strr = malloc(i);
	if (strr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		strr[i] = str[i];
		i++;
	}
	strr[i] = '\0';
	return (strr);
}
