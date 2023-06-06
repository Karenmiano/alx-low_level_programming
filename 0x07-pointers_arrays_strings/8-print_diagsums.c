#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrix
 * @a: address of the matrix
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int count = size, i = 0, sum1 = 0, sum2 = 0;

	while (count)
	{
		sum1 += a[i];
		i += (size + 1);
		count--;
	}
	count = size;
	i = size - 1;
	while (count)
	{
		sum2 += a[i];
		i += (size - 1);
		count--;
	}
	printf("%d, %d\n", sum1, sum2);
}
