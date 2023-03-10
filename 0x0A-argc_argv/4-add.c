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
	int i = 1;
	int sum = 0;
	int num;

	while (argc > 1)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		argc--;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
