#include "lists.h"

/**
 * add_node_end- adds a new node at the end of a list_t list.
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_other = *head;

	int n = 0;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	new_node->str = strdup(str);
	new_node->len = n;
	new_node->next = NULL;

	if (new_other == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (new_other->next != NULL)
		{
			new_other = new_other->next;
		}
			new_other->next = new_node;
	}
	return (new_node);
}
