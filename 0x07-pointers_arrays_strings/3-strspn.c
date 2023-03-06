#include "main.h"
/**
 * _strspn - function that Returns the number
 * of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string being checked
 * @accept: reference characters
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n, k;

	i = 0;
	n = 0;
	k = 1;
	for (j = 0; s[j] != '\0'; j++)
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[j])
			{
				n++;
			}
			i++;
		}
		i = 0;
		if (n == 0)
			return (n);
		if (n == k)
			k++;
		else
			return (n);
	}
	return (n);
}
