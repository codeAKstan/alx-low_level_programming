#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point, function to print diagonal sums
 * @a: the main part of the array
 * @size: size of the diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, ssum;

	sum = 0;
	ssum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		ssum += a[(size * (i + 1)) - (i - 1)];
	}

	printf("%d, %d\n", sum, ssum);
}
