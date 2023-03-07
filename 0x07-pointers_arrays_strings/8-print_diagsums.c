#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sums of
 * the integers in the diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of a row or column in the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = 0; i < size && j < size; i++, j++)
		sum1 += *(a + (i * size + j));
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		sum2 += *(a + (i * size + j));
	printf("%d, %d\n", sum1, sum2);
}
