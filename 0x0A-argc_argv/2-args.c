#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the argument count
 * @argv: the argument vector
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
