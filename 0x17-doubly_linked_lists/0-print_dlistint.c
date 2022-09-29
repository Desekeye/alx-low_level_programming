#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: The Head of the dlistint_t
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
