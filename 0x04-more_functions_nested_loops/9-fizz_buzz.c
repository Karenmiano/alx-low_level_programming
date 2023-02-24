#include <stdio.h>

/**
 * main - prints out the numbers 1-100 with multiples of 3 as Fizz
 * multiples of 5 as Buzz
 * and multiples of 3 and as FizzBuzz
 *
 * Return:always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
