#include "main.h"

/**
 * _memcpy - entry point
 * @dest: the destination of the copied memory
 * @src: the source memory
 * @n: the length
 * Return: return type is a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
