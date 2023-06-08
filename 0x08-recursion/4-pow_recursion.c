#include "main.h"
/**
 * _pow_recursion - calculates the value of an integer raised to
 * the power
 * @x: the integer
 * @y: the power to raise to
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
