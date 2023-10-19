#include "lists.h"

/**
 * list_len - entry point
 * @h: a pointer of type list_t
 * Return:he number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
