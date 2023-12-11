#include "main.h"

/**
 * _strcat - entry point
 * @dest: the destination of the concate
 * @src: the source string
 * Return: it returns a char variable type
 */

char *_strcat(char *dest, char *src)
{
	char *pdest = dest;

	while (*pdest != '\0')
	{
		pdest++;
	}

	while (*src != '\0')
	{
		*pdest += *src;
		pdest++;
		src++;
	}

	*pdest = '\0';
	return (dest);
}
