#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		if (d == 2 || d == 4)
			continue;
		else
			_putchar('0' + d);
	}
	_putchar('\n');
}
