#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int j = 0;

	if (node == NULL)
		return (0);

	else
	{
		*head = node->next;
		j = node->n;
		free(node);
	}
	return (j);
}
