#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates n bytes of a string onto another
 * to create a new string
 * @s1: leading string
 * @s2: string to concatenate from
 * @n: number of bytes to concatenate
 * Return: the address of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int)_strlen(s2))
	{
		s3 = malloc(_strlen(s1) + _strlen(s2) + 1);
		if (s3 == NULL)
			return (NULL);
	}
	else
	{
		s3 = malloc(_strlen(s1) + n + 1);
		if (s3 == NULL)
			return (NULL);
	}
	for (i = 0; *s1 != '\0'; i++, s1++)
		s3[i] = *s1;
	for (; n != 0 && *s2 != '\0'; i++, s2++, n--)
		s3[i] = *s2;
	s3[i] = '\0';
	return (s3);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
        {
		i++;
        }
	return (i);
}
