#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hast table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux = NULL;

	if (ht == 0 || key == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
