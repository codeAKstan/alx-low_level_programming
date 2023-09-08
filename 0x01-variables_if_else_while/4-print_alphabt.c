#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c = c + 1;
			continue;
		}
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
