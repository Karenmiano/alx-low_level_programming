#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: address of the string
 * @c: the character to be searched
 * Return: pointer to the first occurence of the character in
 * the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
