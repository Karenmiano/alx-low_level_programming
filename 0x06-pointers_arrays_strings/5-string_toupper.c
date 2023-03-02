#include "main.h"

/**
 * string_toupper - a function that turns all uppercase
 * into lower case
 * @n:a pointer to a string
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;
	int j;

	i = 0;
	while (*(n + i) != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (*(n + j) > 96 && *(n + j) < 123)
			*(n + j) -= 32;
		else
			*(n + j) += 0;
	}
	return (n);
}

