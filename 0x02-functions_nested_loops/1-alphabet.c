#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a newline
 * using _putchar
 * Return: nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
