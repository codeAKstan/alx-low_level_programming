#include "main.h"
#include <stdio.h>

/**
 * flip_bits - entry point
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int counter;

	d = n ^ m;
	counter = 0;

	while (d)
	{
		counter++;
		d &= (d - 1);
	}

	return (counter);
}
