#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: the width of array
 * @height: the height of array
 * Return: return 0 on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_dim;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = (int **)malloc(height * sizeof(int *));

	if (two_dim == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		two_dim[i] = (int *)malloc(width * sizeof(int));

		if (two_dim[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_dim[j]);
			}
			free(two_dim);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{

		for (j = 0; j < width; j++)
		{
			two_dim[i][j] = 0;
		}
	}

	return (two_dim);
}
