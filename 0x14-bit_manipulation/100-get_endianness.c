#include "main.h"
/**
 * get_endianness - determines if system is big endian or
 * little endian
 * Return: 1 if little 0 if big
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
