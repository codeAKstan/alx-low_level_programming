#include "main.h"

/**
 * set_bit - entry point
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int point;

	if (index > 64)
		return (-1);

	for (point = 1; index > 0; index--, point *= 2)
		;
	*n += point;

	return (1);
}
