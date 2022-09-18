#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	char centinel = '\0';

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (centinel != '\0')
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			if (centinel == '\0')
				centinel = '1';
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
