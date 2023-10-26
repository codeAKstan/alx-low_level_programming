#include "main.h"
#include <stdio.h>
/**
 * clear_bit - entry point
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int store;

	if (index > 64)
		return (-1);
	store = index;
	for (i = 1; store > 0; i *= 2, store--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
