#include "lists.h"

/**
 * pop_listint - entry point
 * @head: the head node
 * Return: if list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
