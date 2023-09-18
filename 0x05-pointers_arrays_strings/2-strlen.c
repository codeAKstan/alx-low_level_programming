#include "main.h"

/**
 * _strlen - entry point, getting the length of the string
 * @s: the string to check
 * Return: return value is an integer
 */

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
