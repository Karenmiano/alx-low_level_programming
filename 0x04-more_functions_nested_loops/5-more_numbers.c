#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int t = 0, i;

	while (t < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if ((i / 10) == 1)
			{
				_putchar('1');
			}
			_putchar('0' + (i % 10));
			i++;
		}
		_putchar('\n');
		t++;
	}
}
