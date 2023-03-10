#include "main.h"
/**
 * _memcpy - function that copies n bytes from source
 * memory area to destination memory area
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n:the number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
