#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a new node
 *		at a given position.
 *
 *@h: linked list
 *@idx: index of the list where the new node should be added. Index starts at 0
 *
 *@n: value
 *Return: new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, count2 = 0;
	dlistint_t *new_node, *head, *head2 = *h;

	if (h == NULL)
		return (NULL);
	head = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (head2 != NULL)
	{
		head2 = head2->next;
		count2++;
	}
	if (count2 < idx)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if (head->next)
		{
			(*h)->prev = new_node;
			new_node->next = *h;
		}
		*h = new_node;
		return (new_node);
	}
	while (count < idx - 1 && head != NULL)
	{
		head = head->next;
		count++;
	}
	if (head->next)
		head->next->prev = new_node;

	new_node->prev = head;
	new_node->next = head->next;
	head->next = new_node;
	return (new_node);
}
