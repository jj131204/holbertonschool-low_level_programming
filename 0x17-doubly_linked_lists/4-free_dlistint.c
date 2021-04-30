#include "lists.h"
/**
 * free_dlistint - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
