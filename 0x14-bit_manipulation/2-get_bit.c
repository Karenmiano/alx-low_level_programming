#include "main.h"
/**
 * get_bit - gets the value of a bit at given index
 * @n: integer to check
 * @index: index of bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 * unsigned int bits;
	 *
	 *bits = sizeof(unsigned long int) * 8;
	 */
	/**
	 * if (index >= bits)
	*	return (-1);
	*/	
	if (n & (1 << index))
		return (1);
	return (0);
}
