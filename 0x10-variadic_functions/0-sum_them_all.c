#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - gets the sum of integer arguments
 * @n: the number of arguments
 * Return: the result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
