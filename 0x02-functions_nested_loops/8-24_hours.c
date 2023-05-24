#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * Return: nothing
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (d = 0; d < 10; d++)
	{
		_putchar('0' + a);
		_putchar('0' + b);
		_putchar(':');
		_putchar('0' + c);
		_putchar('0' + d);
		_putchar('\n');
		if (d == 9)
		{
			d = -1;
			c++;
		}
		if (c == 6)
		{
			c = 0;
			b++;
		}
		if (b == 9 && a < 2)
		{
			b = 0;
			a++;
		}
		if (b == 4 && a == 2)
		{
			break;
		}
	}
}
