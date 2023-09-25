#include "main.h"
#include <stdio.h>

/**
 * _strchr -  entry point
 * @s: the main string
 * @c: the substring to find
 * Return: the return type is a char or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
