#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{

	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next; /* *(head) desreferencia head */
		free(*head);
		(*head) = next;
	}
	(*head) = NULL;
}
