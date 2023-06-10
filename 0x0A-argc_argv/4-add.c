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
	int i, j, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!(argv[i][k] >= '0' && argv[i][k] <= '9'))
			{
				printf("Error\n");
				return (-1);
			}
		}
		j = atoi(argv[i]);
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
