#include "main.h"

int _sqrt_recursion(int n)
{
	int i = 2, y = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	while (n % i != 0)
	{
		i++;
	}
	while (n % i == 0)
	{
		y++;
		n /= i;
	}
	if (y % 2 != 0)
		return (-1);
	y /= 2;
	while (y > 1)
	{
		i *= i;
		y--;
	}
	if (n == 1)
		return (i);
	i = i * _sqrt_recursion(n);
	if (i < 0)
		return (-1);
	return (i);
}
