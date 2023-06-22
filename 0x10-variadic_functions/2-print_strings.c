#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings given as arguments
 * @separator: separates the strings
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		str = va_arg(args, char *);
		printf("%s", str ? str : "(nil)");
	}
	va_end(args);
	printf("\n");
}
