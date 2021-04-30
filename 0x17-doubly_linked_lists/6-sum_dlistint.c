#include "lists.h"
/**
 * sum_dlistint - function that sum of all the data (n) of a listint_t.
 *
 * @head: Pointed to head of a list
 *
 * Return: return the sum.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
