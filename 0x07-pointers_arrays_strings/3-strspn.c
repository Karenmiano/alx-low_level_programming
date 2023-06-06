#include "main.h"
/**
 * _strspn - gets the length of substring in a string entirely
 * made up of specified characters
 * @s: the string to be checked
 * @accept: the characters to look for
 * Return: the length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
