#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, gets product of input
 * @argc: number of arguments
 * @argv: pointers to arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
