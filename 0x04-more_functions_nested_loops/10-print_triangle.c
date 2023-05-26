#include "main.h"
/**
 * print_triangle - prints a sized triangle using #
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 1, j, k = 0, s = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (k < size)
		{
			while (i < s)
			{
				_putchar(' ');
				i++;
			}
			i = 1;
			s--;
			for (j = 0; j <= k; j++)
			{
				_putchar('#');
			}
			k++;
			_putchar('\n');
		}
	}
}
