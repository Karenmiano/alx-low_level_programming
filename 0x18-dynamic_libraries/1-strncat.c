#include "main.h"
/**
 * _strncat - concatenates n bytes on to destination string
 * @dest: string to concatenate to
 * @src: string to concatenate bytes from
 * @n: number of bytes to be appended
 * Return: 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j != n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
