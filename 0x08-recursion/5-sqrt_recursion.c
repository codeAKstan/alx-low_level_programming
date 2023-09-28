#include "main.h"
int find_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - entry point
 * @n: the number to get its sqrt
 * Return: it returns an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}

/**
 * find_sqrt_recursion - Entry point find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int find_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt_recursion(n, i + 1));
}
