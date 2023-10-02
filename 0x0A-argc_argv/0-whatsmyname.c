#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point
 * @argc: the argument count
 * @argv: the argument vector
 * Return: EXIT_SUCCESS on succes or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
