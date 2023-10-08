#include "main.h"
#include <stdlib.h>

/**
 * array_range- entry point
 * @min: the min value it should hold
 * @max: the max value it should hold
 * Return: Null if fails, min > max return NULL
 */

int *array_range(int min, int max)
{
	int *nums;
	int i;

	if (min > max)
		return (NULL);

	nums = malloc(sizeof(nums) * ((max - min) + 1));

	if (nums == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		nums[i] = min + i;
	}

	return (nums);
}
