#include <stdio.h>
/**
 * main - accepts command line arguments and prints them out
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
