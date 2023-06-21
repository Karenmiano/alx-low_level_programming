#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entry point, simple calculator program
 * @argc: number of command line arguments passed
 * @argv: array of pointers to the command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*action)(int, int);
	char arr[] = {'+', '-', '*', '/', '%'};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (strchr(arr, argv[2][0]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	action = get_op_func(&argv[2][0]);
	printf("%d\n", action(a, b));
	return (0);
}
