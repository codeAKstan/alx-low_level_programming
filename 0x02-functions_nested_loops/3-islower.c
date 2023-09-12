#include "main.h"
/**
 *_islower - checks for lower case characters
 *@c: the character to check
 *Return: 1 if lowercase, 0 otherswise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
