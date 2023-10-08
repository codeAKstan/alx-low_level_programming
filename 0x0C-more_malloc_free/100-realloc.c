#include "main.h"
#include <stdlib.h>

/**
 * _realloc - entry point
 * @ptr: pointer to the memory prev allocated
 * @old_size: the size of space allocated to ptr
 * @new_size: size of the new memory block
 * Return: a void function
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	int i, min;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	min = ((new_size < old_size) ? new_size : old_size);

	mem = malloc(new_size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
	{
		((char *)mem)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (mem);
}
