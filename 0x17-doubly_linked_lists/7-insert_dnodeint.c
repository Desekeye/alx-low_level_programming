#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
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
