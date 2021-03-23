#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @index: Pointed to head of a list
 *
 * @head: Pointed to head of a list
 *
 * Return: the nodes of the head.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	 unsigned int count = 0;

	if  (!head || !index)
		return (NULL);

	else
	{
		while (count < index && node != NULL)
		{
			node = node->next;
			count++;
		}
		if (count !=  index)
			return (NULL);
	}
	
	return (node);
}
