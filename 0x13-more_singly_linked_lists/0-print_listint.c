#include "lists.h"

/**
 *
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	int j = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
