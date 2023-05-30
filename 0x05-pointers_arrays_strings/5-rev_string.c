#include "main.h"
/**
 * rev_string - reverses a string in memory
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j = 0;
	char t;

	while (s[j] != '\0')
	{
		j++;
	}
	j -= 1;
	for (i = 0; i <= j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
