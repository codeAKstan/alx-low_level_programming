#include "lists.h"

/**
 * free_listint - entry point
 * @head: the begining of the node
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);
		current = next_node;
	}
}
