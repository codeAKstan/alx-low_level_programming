#include "main.h"

/**
 * print_most_numbers - entry point
 * do not print 2 and 4
 */

void print_most_numbers(void)
{
	char n = 48;

	while (n < 58)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
