#include "hash_tables.h"
/**
* hash_table_get - get the value element associated with a key from the hash table
* @ht: pointer to the hashtable
* @key: the key
* Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash = hash_djb2((const unsigned char *)key) % ht->size;

	if (ht->array[hash] != NULL)
		return (ht->array[hash]->value);
	return (NULL);
}