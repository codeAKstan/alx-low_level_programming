#include "main.h"

/**
 * swap_int - entry point, swap two integers
 * @a: first integer
 * @b: secong integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
