#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints integers given as arguments
 * @separator: separate the list
 * @n: number of integers given
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	printf("\n");
}
