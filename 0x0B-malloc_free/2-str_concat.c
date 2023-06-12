#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings and stores the copy
 * @s1: string
 * @s2: string
 * Return: pointer to the copy
 */
char *str_concat(char *s1, char *s2)
{
	char *temp, *str;
	int i = 1;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	temp = s1;
	while (*temp != '\0')
	{
		i++;
		temp++;
	}
	temp = s2;
	while (*temp != '\0')
	{
		i++;
		temp++;
	}
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
