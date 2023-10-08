#include "main.h"
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: number of memory
 * @size: size of memory
 * Return: a void function
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_len;
	unsigned int i;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_len = nmemb * size;
	mem = malloc(total_len);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < total_len; i++)
		((char *)mem)[i] = 0;
	return (mem);
}
