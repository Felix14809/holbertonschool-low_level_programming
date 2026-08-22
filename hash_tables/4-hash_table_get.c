#include "hash_tables.h"
/**
* hash_table_get - get the value element associated with a key from the hash table
* @ht: pointer to the hashtable
* @key: the key
* Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;

	if (key != NULL && ht != NULL)
		hash = hash_djb2((const unsigned char *)key) % ht->size;
	else 
		return (NULL);
	if (ht->array[hash] == NULL)
		return (NULL);
	node = ht->array[hash];
	while (strcmp(node->key, key) != 0 && node->next != NULL)
	{
		node = node->next;
	}
	if (strcmp(node->key, key) == 0)
		return (node->value);
	return (NULL);
}
