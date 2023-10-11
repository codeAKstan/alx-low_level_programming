#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - entry point
 * @name: the name to print
 * @f: the pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
