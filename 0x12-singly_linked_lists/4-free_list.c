#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */


void free_list(list_t *head)
{
list_t *new_node = head;

	list_t *next = NULL;

	for (; new_node != NULL; new_node = next)
	{
		next = new_node->next;
		free(new_node->str);
		free(new_node);
	}

}
