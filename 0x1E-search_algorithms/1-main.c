#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
            10, 12, 13, 16, 18, 19, 20, 21,22, 23, 24, 33, 35, 42, 47
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, binary_search(array, size, 6));

    return (EXIT_SUCCESS);
}