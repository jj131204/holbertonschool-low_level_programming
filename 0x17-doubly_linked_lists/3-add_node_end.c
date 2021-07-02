#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end;

	if (head == NULL)
		return (0);

	add_end = malloc(sizeof(dlistint_t));
	if (add_end == NULL)
		reuturn (0);

	add_end->next = NULL;
	add_end->n = n;
	add_end->prev = *head;


	if (*head != NULL)
	{
		while(*head->next != NULL)
			*head = (head)->next;

		(*head)->next = add-end;
	}
	return (add_end);
}
