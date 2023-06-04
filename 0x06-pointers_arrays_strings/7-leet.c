#include "main.h"
/**
 * leet - encodes a string into leet speak
 * @s: the string
 * Return: s the modified string
 */
char *leet(char *s)
{
	int i, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[i] == s1[k])
			{
				s[i] = s2[k];
				break;
			}
		}
	}
	return (s);
}
