#include "main.h"
/**
 * puts2 - function that prints every second character from the first
 * @str: string to be used
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	if (str[i] == "")
		return;
	_putchar(str[i]);
	while (str[i + 1] != '\0' && str[i + 2] != '\0')
	{
		_putchar(str[i + 2]);
		i += 2;
	}
	_putchar('\n');
}
