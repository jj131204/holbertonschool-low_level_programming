#include "hash_tables.h"

/**
* hash_table_get -  function that retrieves a value associated with a key.
*
* @ht:  is the hash table you want to look into
*
* @key: s the key you are looking for
*
* Return: aux->value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;
	unsigned int index = 0;


	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}
