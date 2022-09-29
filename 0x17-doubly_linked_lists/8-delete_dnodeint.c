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
	dlistint_t *new, *cursor;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* loop until nth node of idx */
	cursor = *h;
	while (idx > 1 && cursor && cursor->next)
	{
		cursor = cursor->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 1 || cursor == NULL)
		return (NULL);

	/* assign value to new node */
	new->n = n;

	/* insert node */
	if (cursor->next != NULL)
		cursor->next->prev = new;
	new->prev = cursor;
	new->next = cursor->next;
	cursor->next = new;

	return (new);
}
