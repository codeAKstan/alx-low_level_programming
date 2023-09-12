#include "main.h"
/**
 * print_alpahbet - print lowercase letters,
 *followed by a new line
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
