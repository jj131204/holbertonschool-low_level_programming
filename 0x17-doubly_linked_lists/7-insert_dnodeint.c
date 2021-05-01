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
	unsigned int count = 0;
	dlistint_t *new_node, *head;

	if (h == NULL)
		return (0);

	head = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);

	new_node->n = n;

	while (count < idx - 1  && head != NULL)
	{
		head = head->next;
		count++;
	}
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

	if (head->next)
		head->next->prev = new_node;

	new_node->prev = head;
	/*new_node->n = n;*/
	new_node->next = head->next;
	head->next = new_node;
	return (new_node);
}
