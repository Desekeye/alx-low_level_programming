#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && cursor)
		{
			cursor = cursor->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && cursor)
		{
			if (cursor->next)
				cursor->next->prev = cursor->prev;
			if (cursor->prev)
				cursor->prev->next = cursor->next;
			else
				*head = cursor->next;
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
