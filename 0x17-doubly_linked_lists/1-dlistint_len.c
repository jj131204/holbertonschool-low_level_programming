#include  "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked list
 *
 *@h: head
 *
 *Return: numbers of elements of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
