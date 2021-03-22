#include "lists.h"

/**
 * listint_len - Prints all the elements of a list.
 *
 * @h: The number of nodes.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}

	return (j);
}
