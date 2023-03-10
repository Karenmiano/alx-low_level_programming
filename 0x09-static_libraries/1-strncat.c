#include "main.h"

/**
 * _strncat - a function that takes two strings
 * and copies a specific number of characters from one string
 * to the other
 * @dest: string to copy to
 * @src: string to copy from
 * @n: defines the number of characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	for (j = 0; *(src + j) != *(src + n) && *(src + j) != '\0'; i++, j++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
