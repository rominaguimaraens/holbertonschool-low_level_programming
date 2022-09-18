#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *before = NULL, *aux = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			before = ht->array[i];
			while (before)
			{
				aux = before->next;
				free(before->key);
				free(before->value);
				free(before);
				before = aux;
			}
		}
		free(ht->array);
		free(ht);
	}
}
