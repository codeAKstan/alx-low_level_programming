#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: the destination sting
 * @s2: the second string
 * Return: NULL if the allocation failed
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';
	return (str);
}
