#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: the integer used to calculate the memory size
 * Return: returns a pointer to the allocated memory
 * malloc fails - return 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
