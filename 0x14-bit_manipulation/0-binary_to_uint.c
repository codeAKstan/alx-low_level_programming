#include "main.h"

/**
 * binary_to_uint - entry point
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 *  if there is one or more chars in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	size_t i = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
