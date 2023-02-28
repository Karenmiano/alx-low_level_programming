#include "main.h"

/**
 * print_rev - reverses the characters provided by
 * the pointer to a string
 * @s:the input
 */
void print_rev(char *s)
{
	int i;
	int m;

	for (i = 0; *(s + i) != 0;)
		i++;
	m = i - 1;
	while (m >= 0)
	{
		_putchar (*(s + m));
		m--;
	}
	_putchar ('\n')
}
