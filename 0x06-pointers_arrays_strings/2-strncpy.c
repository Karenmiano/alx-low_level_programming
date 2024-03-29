#include "main.h"
/**
 * _strncpy - function that copies n bytes on to another string
 * @dest: the string to be copied to
 * @src: string to copy from
 * @n: number of characters to be copied from the source string
 * Return: 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
