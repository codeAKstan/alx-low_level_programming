#include "main.h"
#include <unistd.h>

/**
 * puts2 - entry point
 * @str: the character to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i = i + 2;
	}
	write(1, "\n", 1);
}
