#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *new_node = head;

	listint_t *next = NULL;

	for (; new_node != NULL; new_node = next)
	{
		next = new_node->next;
		free(&new_node->n);
		free(new_node);
	}


}
