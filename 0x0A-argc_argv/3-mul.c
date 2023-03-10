#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes command line arguments which includes two
 * integers and returns the product of these two integers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
