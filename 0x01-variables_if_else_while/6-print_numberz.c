#include <stdio.h>
/**
 * main -entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
