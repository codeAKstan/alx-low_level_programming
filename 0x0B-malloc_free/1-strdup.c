#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _strdup - entry point - returns a pointer to space memory
 * @str: the string to return
 * Return: return NULL if str is NULL
 * On succes return pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = (char *)malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}
