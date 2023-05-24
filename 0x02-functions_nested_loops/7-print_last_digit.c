#include "main.h"
/**
 * print_last_digit - function that prints the last digit of an integer
 * @i: the integer
 * Return: the last digit of the integer
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
		l = -l;
	_putchar('0' + l);
	return (l);
}
