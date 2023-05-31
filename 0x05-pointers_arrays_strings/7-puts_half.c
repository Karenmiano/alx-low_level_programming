#include "main.h"
/**
 * puts_half - prints the last half of the string
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	if (i % 2 != 0)
		i = (i / 2) + 1;
	else
		i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
