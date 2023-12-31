#include "main.h"

/**
 * get_bit - entry point
 * @n:the number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	if (index > 64)
		return (-1);

	store = n >> index;
	return (store & 1);
}
