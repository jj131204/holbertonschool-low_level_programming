#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{

	hash_node_t *aux = NULL;
	unsigned int count = 0, test = 0;


	printf("{");

	while (count < ht->size)
	{
		aux = ht->array[count];
		while (aux)
		{
			if (test == 0)
				test = 1;
			else
				printf(", ");

			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			printf("%d", test);
		}
		count++;
	}
	printf("}\n");
}
