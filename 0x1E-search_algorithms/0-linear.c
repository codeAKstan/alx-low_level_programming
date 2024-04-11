#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a value ib an array
 * @array: ptr to the first element
 * @size: no of elements
 * @value: what to serach for
 * Return: the first element where vslue is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
