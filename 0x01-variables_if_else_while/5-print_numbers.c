#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
