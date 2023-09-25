#include "main.h"

/**
 * _memset - entry point , a function to set memory
 * @s: a pointer to the start of the memory filled
 * @b: the byte value
 * @n: thr number of byte to set
 * Return: the return type is a char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
