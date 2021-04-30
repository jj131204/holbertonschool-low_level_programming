#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 *
 *@head: head
 *
 *@n: node
 *
 *Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end, *tmp;

	tmp = *head;

	if (head == NULL)
		return (0);

	add_end =  malloc(sizeof(dlistint_t));
	if (add_end == NULL)
		return (0);

	add_end->next = NULL;
	add_end->n = n;

	if (*head == NULL)
		(*head) = add_end;

	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
			tmp->next = add_end;
			add_end->prev = tmp;
	}
	return (add_end);
}
