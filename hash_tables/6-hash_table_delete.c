#include "hash_tables.h"
/**
* hash_table_delete - deletes the whole hash table
* @ht: pointer to the hashtable
* Return: nothin
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int index = 0;
	
	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = temp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
