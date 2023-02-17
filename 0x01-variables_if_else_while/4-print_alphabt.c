#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char e;

	e = 'a';
	while
		(e <= 'z') {
			if ((e != 'q' && e != 'e') && e <= 'z')
				putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}
