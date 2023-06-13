#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates command line arguments
 * @ac: number of CLAs
 * @av: pointer to pointer of first argument
 * Return: pointer to string made up of all CLAs
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += (_strlen(av[i]) + 1);
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
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
