#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: address of string to be converted
 * Return: the found integer
 */
int _atoi(char *s)
{
	int i = 0, j = 1;
	unsigned int num = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		i++;
	}
	i -= 1;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num += (s[i] - '0') * j;
		j *= 10;
		i--;
	}
	if (s[i] == '-')
		num = -num;
	return (num);
}
