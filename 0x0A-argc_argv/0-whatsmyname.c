#include <stdio.h>
/**
 * main - accepts command line arguments and prints out
 * the name of the program being ran
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
