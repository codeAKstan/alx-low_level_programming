#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: the destination string
 * @s2: the second string
 * @n: the no of char to concatenate
 * Return: the return type is a char, if it fails - return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, slen = 0;
	unsigned int i, j;
	unsigned int total_len;

	if (s1 != NULL)
	{
		while (s1[len] != '\0')
			len++;
	}

	if (s2 != NULL)
	{
		while (s2[slen] != '\0')
			slen++;
	}

	total_len = len + (n < slen ? n : slen);

	str = malloc(sizeof(*str) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n && s2 != NULL && s2[j] != '\0'; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';
	return (str);
}
