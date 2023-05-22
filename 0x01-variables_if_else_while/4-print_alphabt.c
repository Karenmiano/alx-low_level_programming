#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c == 'e') || (c == 'q'))
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
