#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	long unsigned int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
