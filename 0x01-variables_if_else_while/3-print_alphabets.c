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
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
