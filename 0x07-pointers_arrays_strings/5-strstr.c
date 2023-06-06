#include "main.h"
#include <stdlib.h>
/**
 * _strstr - function that checks for a matching substring within a string
 * @haystack: string to be checked
 * @needle: substring to find
 * Return: pointer to where substring starts, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			temp = haystack;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*temp != needle[i])
				{
					break;
				}
				temp++;
			}
			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
