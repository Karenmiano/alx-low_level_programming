#include "main.h"
/**
 * set_string - sets pointer to point to another string
 * @s: address of pointer
 * @to: new string to be assigned
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
