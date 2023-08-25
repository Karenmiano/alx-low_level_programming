#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - checks a string for any set of characters
 * @s: address of the string
 * @accept: address of the characters to be searched for
 * Return: pointer to the first occurence of any of the characters
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
