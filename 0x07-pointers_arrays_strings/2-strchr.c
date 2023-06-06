#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: address of the string
 * @c: the character to be searched
 * Return: pointer to thee first occurence of the character in
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
	return (NULL);
}
