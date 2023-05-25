#include "main.h"

void print_diagonal(int n)
{
	int d = 0, i;

	while (d < n)
	{
		_putchar('\\');
		_putchar('\n');
		if (n == 1)
			break;
		else
		{
			i = 0;
			while (i < n)
			{
				_putchar(' ');
				i++;
			}
		}
		

