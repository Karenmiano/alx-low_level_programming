#include "main.h"
/**
 * flip_bits - counts the number of bits to be flipped in order to get
 * from one value to another
 * @n: value
 * @m: value
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int on_bits;

	/* where bits are different(to be flipped)on_bit will set to 1 */
	on_bits = n ^ m;
	/* count the number of on bits */
	while (on_bits != 0)
	{
		if (on_bits & 1)
			count++;
		on_bits = on_bits >> 1;
	}
	return (count);
}
