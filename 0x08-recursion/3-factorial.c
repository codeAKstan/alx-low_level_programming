#include "main.h"

/**
 * factorial - entyr point
 * @n: the number to get its factorial
 * Return: the return type is an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
