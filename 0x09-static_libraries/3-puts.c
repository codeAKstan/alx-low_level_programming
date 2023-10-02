#include "main.h"
#include <unistd.h>


/**
 * _puts - entry point
 * @str: the string to be printed to stdouts
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}
