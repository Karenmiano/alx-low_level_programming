#include "main.h"
/**
 * _strlen_recursion - function that calculates string length
 * @s: string to be checked
 * Return: returns n which is an integer
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (n);
	n = 1 + _strlen_recursion(s + 1);
	return (n);
}
