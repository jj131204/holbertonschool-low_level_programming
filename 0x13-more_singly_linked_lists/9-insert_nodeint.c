#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 *
 * @head: head of linked list
 *
 * @idx: index of new node
 *
 * @n: number for n element of struct of linked list
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new = *head;
	unsigned  int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);


		while (count < idx - 1 && new)
		{
			new = new->next;
			count++;
		}

	if (node)
	{
		node->n = n;

		if (idx == 0)
		{
			node->next = *head;
			*head = node;
		}

		else
		{
			node->next = new->next;
			new->next = node;
		}
	}

	return (node);
}
