#include "main.h"

/**
 * rev_string - entry point
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
