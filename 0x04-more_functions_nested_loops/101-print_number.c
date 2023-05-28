#include "main.h"
#include <limits.h>
/**
 * print_number - prints integers no matter the length
 * @n: the integer
 * Return: nothing
 */
void print_number(int n)
{
	int d = 10;
	int divider = 1;
	int num_digits = 1;
	int temp = n;

	if (n == INT_MIN)
	{
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp / d)
	{
		num_digits++;
		temp /= d;
	}
	while (num_digits > 1)
	{
		divider *= d;
		num_digits--;
	}
	while (divider)
	{
		_putchar('0' + (n / divider));
		n %= divider;
		divider /= d;
	}
}
