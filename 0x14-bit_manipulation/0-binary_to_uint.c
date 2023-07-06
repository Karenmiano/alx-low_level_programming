#include "main.h"
/**
 * binary_to_uint - converts binary string to base 10(unsigned int)
 * @b: binary string
 * Return: base 10 number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, max;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
		;
	if (b[i] != '\0')
		return (0);
	max = 4294967295;
	for (i = 0; b[i] != '\0' && dec < max; i++)
	{
		if (b[i] == '1')
		{
			dec += 1 << (_strlen(b) - i - 1);
		}
	}
	if (dec == max && b[i] != '\0')
		return (0);
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

