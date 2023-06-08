#include "main.h"
/**
 * _strlen_recursion - gets the length of a strin using recursion
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
