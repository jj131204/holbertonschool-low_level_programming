#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node = *head;

	listint_t *next = NULL;

	for (; new_node != NULL; new_node = next)
	{
		next = new_node->next;
		free(new_node);
		new_node = next;
	}
}
