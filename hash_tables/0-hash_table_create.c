#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	long unsigned int i;
	hash_table_t *table = malloc (sizeof(hash_table_t) * size);
	table->size = size;
	table->array = 0;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
