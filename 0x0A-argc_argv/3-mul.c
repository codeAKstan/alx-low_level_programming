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
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
