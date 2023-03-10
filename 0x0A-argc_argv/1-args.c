#include <stdio.h>
/**
 * main - accepts command line arguments and prints out the
 * number of arguments
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
