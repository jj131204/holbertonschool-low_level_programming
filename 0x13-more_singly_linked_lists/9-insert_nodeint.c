#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new = *head;
	unsigned  int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
                return (NULL);
	
	if  (!head || !idx)
		return (0);

	else
	{
		while (count < idx)
		{
			new = new->next;
			count++;
		}
	node->n = n;
        node->next = *head;
	*head = node;  
	
	}
	return(new);
}
