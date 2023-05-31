#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements from an array of integers
 * @a: starting address of array
 * @n: the number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
