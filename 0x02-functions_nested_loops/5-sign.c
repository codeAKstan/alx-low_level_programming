#include "main.h"
/**
 *print_sign - entry point
 *@n: the input taken
 *Return: 1 and + if > 0, 0 and 0 if 0 and -1 and - if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
