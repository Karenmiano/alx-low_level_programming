#include "main.h"

/**
 *_strcat - takes two pointers to strings and
 *concatenates them
 *@dest: input
 *@src: input
 *Return: the pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	for (j = 0; *(src + j) != '\0'; i++, j++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
