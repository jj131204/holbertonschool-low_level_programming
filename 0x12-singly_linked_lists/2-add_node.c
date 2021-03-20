#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int n = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str != NULL)
		l++;

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = n;

	*head = new;

	return (*head);

}
