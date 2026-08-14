#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hashtable
 * @key: the key
 * @value: the string associated with the key 
 * Return: Succes or failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int hash; 
	char *dupkey, *dupvalue;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->next = NULL;
	dupkey = strdup(key);
	if (dupkey == NULL)
	{
		free (new);
		return (0);
	}
	new->key = dupkey;
	dupvalue = strdup(value);
	if (dupvalue == NULL)
	{
		free (dupkey);
		free (new);
		return (0);
	}
	new->value = dupvalue;
	hash = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[hash] == NULL)
		ht->array[hash] = new;
	else
	{
		new->next = ht->array[hash];
		ht->array[hash] = new;
	}
	return (1);
}
