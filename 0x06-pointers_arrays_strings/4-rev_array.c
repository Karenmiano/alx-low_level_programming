#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: the array
 * @n: the number of integers in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = n - 1; i <= j; i++, j--)
	{
		t = a[j];
		a[j] = a[i];
		a[i] = t;
	}
}
