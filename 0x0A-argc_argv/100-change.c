#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, gets minimum number of coins for change
 * for money
 * @argc: number of CLAs
 * @argv: pointers to CLAs
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int i, j = 0, k = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (1);
	}
	while (i)
	{
		if (i / coin[k])
		{
			j += (i / coin[k]);
			i %= coin[k];
		}
		k++;
	}
	printf("%d\n", j);
	return (0);
}
