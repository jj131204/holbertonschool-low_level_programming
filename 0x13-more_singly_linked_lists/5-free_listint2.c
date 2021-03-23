#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
/*	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = (*head)->next;
			free(*head);
			(*head) = aux;
		}
		(*head) = NULL;
	}*/

	listint_t *node;
	if (head)
	{
		while (*head) 
		{
		 	node = (*head)->next;
			free(*head);
			(*head) = node;
		}
		(*head) = NULL;
}
}
