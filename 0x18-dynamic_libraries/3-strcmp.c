#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: an int, 0 if they are similar, the difference of the different
 * characters if otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0')
		{
			return (0);
		}
		j++;
	}
	return (s1[j] - s2[j]);
}
