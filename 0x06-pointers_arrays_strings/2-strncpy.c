#include "main.h"

/**
 * _strncpy - the function copies the content in one string to
 * another, taking a specified number of characters
 * copying by replacing the first n characters
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != *(src + n); i++)
		*(dest + i) = *(src + i);
	return (dest);
}
