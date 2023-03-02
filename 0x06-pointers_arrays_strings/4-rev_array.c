#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int b[1000];
	int *ptr;

	ptr = b;
	for (i = 0; i < n; i++)
		*(ptr + i) = *(a + i);
	for (i = 0, j = n - 1; j >= 0; i++, j--)
		*(a + i) = *(ptr + j);
}
