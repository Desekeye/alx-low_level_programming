#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free = head;

	if (head == NULL)
		return;

	while (free != NULL)
	{
		free = head->next;
		free(head);
		head = free;
	}
}
