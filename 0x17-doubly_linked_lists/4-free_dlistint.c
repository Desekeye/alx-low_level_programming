#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freedom = head;

	if (head == NULL)
		return;

	while (freedom != NULL)
	{
		freedom = head->next;
		free(head);
		head = freedom;
	}
}
