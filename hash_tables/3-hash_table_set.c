#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: hast table
 * @key: key
 * @value: value
 * Return: 1 (success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *aux = NULL;

	unsigned const char *keydup = (unsigned const char *)key;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index(keydup, ht->size);
	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
