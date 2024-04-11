#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search for a value using binary serach
 * @array: ptr to the first element
 * @size: no of elements
 * @value: value to search
 * Return: the index where value is located or -1;
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int i;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
