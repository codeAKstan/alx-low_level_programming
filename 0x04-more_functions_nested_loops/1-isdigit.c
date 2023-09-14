#include "main.h"

/**
 * _isdigit - entry point
 * @c: input to check
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	return (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}
