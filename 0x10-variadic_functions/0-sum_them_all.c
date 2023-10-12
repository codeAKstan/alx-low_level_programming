#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @n: the number of numbers to sum
 * Return: should return the sum
 * if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		x = va_arg(ap, int);

		sum += x;
	}

	va_end(ap);
	return (sum);
}
