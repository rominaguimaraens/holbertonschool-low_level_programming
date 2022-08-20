#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of array
 * Return: index where key/value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	if (!key)
		return (0);
	hash_key = hash_djb2(key);

	return (hash_key % size);
}
