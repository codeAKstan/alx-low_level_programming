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
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
