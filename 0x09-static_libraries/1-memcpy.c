#include "main.h"
/**
 * _memcpy - copies the bytes in one location to another
 * @dest: the memory to copy to
 * @src: the memory to copy from
 * @n: the number of bytes to read and copy
 * Return: dest, the modified memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
