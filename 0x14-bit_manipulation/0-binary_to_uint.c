#include "main.h"
/**
 * binary_to_uint - converts binary string to base 10(unsigned int)
 * @b: binary string
 * Return: base 10 number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, size;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
		;
	if (b[i] != '\0')
		return (0);
	size = _strlen(b);
	if (size > (int)(sizeof(unsigned int) * 8))
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			dec += 1 << (size - i - 1);
		}
	}
	return (dec);
}
#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

