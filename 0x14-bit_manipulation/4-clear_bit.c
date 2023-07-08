#include "main.h"
/**
 * clear_bit - sets bit to 0 at index
 * @n: pointer to integer to be modified
 * @index: index of bit to be set
 * Return: 1 if successful -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;

	num_bits = 8 * sizeof(unsigned long int);
	/* Checks if index is within range of bits */
	if (index >= num_bits)
		return (-1);
	if (*n & (1 << index))/* Checks if bit at given index is ON */
		*n = *n ^ (1 << index);/* if ON clears it */
	return (1);
}
