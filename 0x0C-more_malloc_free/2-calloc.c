#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills assigned memory with a constant byte
 * @s: address of the memory
 * @b: the value to be assigned to the continuous bytes
 * @n: the number of bytes to be assigned assigned the value
 * Return: s the address of the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n)
	{
		*t = b;
		t++;
		n--;
	}
	return (s);
}
/**
 * _calloc - allocates memory and sets all bytes to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: address of the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
