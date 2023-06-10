#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, gets the sum of user input
 * @argc: number of arguments
 * @argv: pointers to the CL arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);

		if (j == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
