#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
