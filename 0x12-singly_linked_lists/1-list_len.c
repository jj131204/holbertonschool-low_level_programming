#include "lists.h"

/**
 * list_len - Prints all the elements of a list.
 *
 * @h: The number of nodes.
 *
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
int  n = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
