#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table.
*
* @ht: is the hash table
*
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *delete = NULL;
	unsigned int count = 0;

	if (ht == NULL)
		return;

	while (count <  ht->size)
	{
		aux = ht->array[count];

		while (aux)
		{
			delete = aux;
			free(delete->key);
			free(delete->value);
			free(delete);
			aux = aux->next;
		}
	count++;
	}
	free(ht->array);
	free(ht);
}
