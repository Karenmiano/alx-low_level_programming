#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	int i = 2;
	long int n = 612852475143;

	while (i < n)
	{
		if (n % i == 0)
			n = n / i;
		else
			i++;
	}
	printf("%ld\n", n);
	return (0);
}
