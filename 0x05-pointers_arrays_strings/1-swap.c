#include "main.h"

/**
 * swap_int - a function that takes the pointers to two variables
 * and swaps the values in them
 * @a: input
 * @b: input
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
