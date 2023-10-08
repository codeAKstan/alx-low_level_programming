#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - entry point
 * @s1: the destination string
 * @s2: the second string
 * @n: number of char to concatenate from s2
 *
 * Return: the return type is a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;
	unsigned int len = 0, slen = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[slen])
		slen++;

	if (n < slen)
		str = malloc(sizeof(char) * (len + n + 1));
	else
		str = malloc(sizeof(char) * (len + slen + 1));

	if (!str)
		return (NULL);

	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < slen && i < (len + n))
		str[i++] = s2[j++];

	while (n >= slen && i < (len + slen))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
