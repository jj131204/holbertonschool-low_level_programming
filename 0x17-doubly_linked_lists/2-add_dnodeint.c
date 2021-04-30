#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 *@head: head
 *
 *@n: node
 *
 *Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
		return (0);

	add =  malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (0);

	add->prev = NULL;
	add->n = n;
	add->next = *head;

	if (*head != NULL)
		(*head)->prev = add;

	*head = add;

	return (add);


}
