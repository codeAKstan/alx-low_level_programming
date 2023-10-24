#include "lists.h"

/**
 * free_listint2 - entry point
 * @head: the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	*head = NULL;
}
