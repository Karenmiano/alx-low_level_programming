#include "main.h"
/**
 * _islower - function that checks if character input is lowercase
 * @c: character to be checked, received as int
 * Return: 1 if it's a lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
