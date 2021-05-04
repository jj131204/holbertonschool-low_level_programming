#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *		 of a dlistint_t linked list.
 *
 *@head: header.
 *
 *@index: index of the node that should be deleted. Index starts at 0
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int count = 0;

	if (head == NULL || h ==  NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}
	else
	{
		while  (count < index)
		{
			if (!h)
				return (-1);
			h = h->next;
			count++;
		}
		if (!h->next)
		{
			h->prev->next = NULL;
			free(h);
			return (1);
		}
		else
		{
			h->next->prev = h->prev;
			h->prev->next = h->next;
			free(h);
		}
	}
	return (1);
}
