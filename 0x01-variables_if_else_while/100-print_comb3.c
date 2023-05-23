#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0, j = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
			j++;

