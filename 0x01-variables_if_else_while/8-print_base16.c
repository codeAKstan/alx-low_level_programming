#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);
		c++;
		if (c == '9' + 1)
		{
			c = 'a';
		}
	}
	putchar('\n');
	return (0);
}
