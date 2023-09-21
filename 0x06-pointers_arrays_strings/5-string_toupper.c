#include "main.h"

/**
 * string_toupper - entry point converts a string to uppercase
 * @str: the string to convert
 * Return: returns a character
 */

char *string_toupper(char *str)
{
	char *ptr_str = str;

	while (*ptr_str != '\0')
	{
		if (*ptr_str >= 'a' && *ptr_str <= 'z')
		{
			*ptr_str = *ptr_str - ('a' - 'A');
		}
		ptr_str++;
	}

	return (str);
}
