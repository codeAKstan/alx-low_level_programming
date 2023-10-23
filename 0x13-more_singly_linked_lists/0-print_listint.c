#include "lists.h"
#include <stdio.h>

/**
 * print_listint - enry point
 * @h:a pointer of type listint_t
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
