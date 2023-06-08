#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: the number
 * Return: the result
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	i = n * factorial(n - 1);
	return (i);
}
