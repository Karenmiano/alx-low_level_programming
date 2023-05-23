#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints a single character on the screen
 * @c: character to be printed
 * return: nothing
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
