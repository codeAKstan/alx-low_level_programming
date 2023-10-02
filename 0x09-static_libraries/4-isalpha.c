#include "main.h"
/**
 *_isalpha - Entry point
 *@c: the input tsken
 *Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
