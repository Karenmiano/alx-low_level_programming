#include "main.h"
/**
 * _strlen - uses a pointer to a string to get the string length
 *@s:pointer to the string
 *Return: an integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0;)
		i++;
	return (i);
}
