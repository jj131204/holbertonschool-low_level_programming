#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a list_t list.
 * @head: The pointer address to header node.
 * @n: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next  = NULL;

	if (new == NULL)
	{
		*head = node;
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
			new->next = node;
	}
	return (node);
}
