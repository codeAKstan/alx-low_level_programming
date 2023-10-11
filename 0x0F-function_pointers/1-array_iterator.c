#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - entry point
 * @array: a pointer of return type int
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
