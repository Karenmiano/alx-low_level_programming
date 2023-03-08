#include "main.h"
/**
 * _pow_recursion - function that calculates the value of an
 * integer raised to the power of another integer
 * @x: the integer
 * @y: the power
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
