#include "main.h"
/**
 * is_prime_number - checks if number is a prime number
 * @n: the number
 * Return: 1 if prime number 0 if otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
