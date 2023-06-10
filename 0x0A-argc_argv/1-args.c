#include <stdio.h>
/**
 * main - entry point, prints the number of CLA passed
 * @argc: number of arguments
 * @argv: pointers to the arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
