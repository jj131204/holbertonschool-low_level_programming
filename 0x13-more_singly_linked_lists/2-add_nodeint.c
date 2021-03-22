#include "lists.h"

/**
 * add_nodeint - adds a new node tho the beggining of a  linked list
 * @head: pointer to head of rhe list
 *@n: number of elements to add
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
