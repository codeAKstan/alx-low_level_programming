#include "main.h"

/**
 * print_binary - entry point
 * @n: the number to prints its binary rep
 */

void print_binary(unsigned long int n)
{
	int size, bit;
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	size = sizeof(n) * 8 - 1;

	while (size >= 0)
	{
		bit = (n >> size) & 1;

		if (bit == 1 || start == 1)
		{
			_putchar(bit + '0');
			start = 1;
		}

		size--;
	}
}
