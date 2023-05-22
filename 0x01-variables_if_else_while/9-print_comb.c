#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar('0' + c);
		if (c == 9)
			break;
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
