#include "lists.h"
/**
 * get_nodeint_at_index - entry point
 * @head: the node head
 * @index: the index of the node starting at 0
 * Return: the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}

		head = head->next;
		count++;
	}
	return (NULL);
}
