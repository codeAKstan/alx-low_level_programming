#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: the string to count its length
 * Return: returns an int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
