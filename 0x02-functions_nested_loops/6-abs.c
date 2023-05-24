#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @i: the integer
 * Return: returns the absolute value of the integer passed
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
