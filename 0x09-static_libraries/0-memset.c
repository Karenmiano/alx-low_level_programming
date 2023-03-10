#include "main.h"

/**
 * _memset - a function that fills the first n bytes of memory pointed to
 * by s with a constant byte
 * @s: the pointer to the memory
 * @b: the constant byte
 * @n: the number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while ((s + i) != (s + n))
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
