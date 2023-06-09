#include "main.h"
/**
 * _isdigit - checks if character passed is a digit 0-9
 * @c: character to be checked
 * Return: 1 if digit is found 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
