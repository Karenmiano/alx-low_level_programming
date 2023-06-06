#include "main.h"
#include <stdio.h>
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

	while (n && *t != '\0')
	{
		*t = b;
		t++;
		n--;
	}
	return (s);
}
