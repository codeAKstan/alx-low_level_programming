#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - entry point - a function that creates an array
 * @size: a non negative number that determines the size of the array
 * @c: any specific char
 * Return: returns Null if size = 0, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = (char *)malloc((size) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	str[size] = '\0';
	return (str);
}
