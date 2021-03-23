#include "lists.h"
/**
 * sum_listint - function that sum of all the data (n) of a listint_t.
 *
 * @head: Pointed to head of a list
 *
 * Return: return the sum.
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int count = 0;

	if (!head)
		return (0);

	else
	{
		while (node != NULL)
		{
			count = count + node->n;
			node = node->next;
		}
	}
	return (count);
}
