#include "lists.h"

/**
 * listint_len - entry point
 * @h: a pointer of type listint_t
 * Return:he number of elements in a linked list_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
