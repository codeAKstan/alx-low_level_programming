#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: the string to be printed
 * Return: doesn't return anything
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
