#include "main.h"
/**
 * set_bit - sets bit of an integer at given index to 1
 * @n: pointer to integer
 * @index: index of bit to be set
 * Return: 1 if successful -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;

	num_bits = 8 * sizeof(unsigned long int);
	if (index >= num_bits)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
