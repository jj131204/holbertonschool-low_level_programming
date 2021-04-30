#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *		of a dlistint_t linked list.
 * @index: Pointed to head of a list
 *
 * @head: Pointed to head of a list
 *
 * Return: the nodes of the head.
 *
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (count < index && head != NULL)
	{
		head = head->next;
		count++;
	}
	return (head);
}
