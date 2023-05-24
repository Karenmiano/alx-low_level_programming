#include "main.h"
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
		l = -l;
	_putchar('0' + l);
	return (l);
}
