#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - entry point
 * @array: an integer array
 * @size: number of elements in the array
 * @cmp: a pointer to the function
 * Return:returns the index of the
 * first element for which the cmp function does not return 0
 * if no element matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
