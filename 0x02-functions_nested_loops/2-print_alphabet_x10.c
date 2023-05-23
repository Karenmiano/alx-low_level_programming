#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
