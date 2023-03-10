#include <stdio.h>
#include <stdlib.h>
/**
 * main - function takes command line arguments which are integers
 * adds them and prints out result
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;

	for (; argc > 1; argc--)
	{
		argv++;
		num = atoi(*argv);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (num < 0)
			continue;
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
