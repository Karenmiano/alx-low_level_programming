#include "main.h"
/**
 * print_binary - prints binary representation of an integer
 * @n: integer to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
