#include "main.h"

/**
 * _strcmp - compares two string character by character stops when
 * it gets a null character or different values
 * @s1: first string
 * @s2: second string
 * @j: integer value
 * return: j
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0, j = 0; (*(s1 + i) != '\0' && *(s2 + i) != '\0') && j == 0; i++)
		if (*(s1 + i) > *(s2 + i))
			j = 15;
		else if (*(s1 + i) < *(s2 + i))
			j = -15;
		else
			j = 0;
	return (j);
}
