#include "main.h"
/**
 * swap_int - swaps the values in two int variables
 * @a: integer
 * @b: integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
