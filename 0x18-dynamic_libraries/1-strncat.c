#include "main.h"

/**
 * _strncat - entry point
 * @dest: - the destination of copied string
 * @src: the file source string to be copied to dest
 * @n: the number of bytes
 * Return: the return type is char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pdest = dest;

	while (*pdest != '\0')
	{
		pdest++;
	}

	while (*src != '\0' && n > 0)
	{
		*pdest = *src;
		pdest++;
		src++;
		n--;
	}

	*pdest = '\0';
	return (dest);
}
