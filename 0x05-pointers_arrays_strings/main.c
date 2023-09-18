#include "main.h"
#include <stdio.h>

int main(void)
{
	int n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	return (0);
}
