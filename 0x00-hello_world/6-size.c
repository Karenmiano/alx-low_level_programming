#include <stdio.h>
/**
 * main - print the sizes of different data types
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long: %lu byte(S)\n", (unsigned long)sizeof(d))
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(f))
	return (0)
}
