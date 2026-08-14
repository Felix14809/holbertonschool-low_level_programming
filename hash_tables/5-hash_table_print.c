#include "hash_tables.h"
/**
* hash_table_print - printe the whole hash table
* @ht: pointer to the hashtable
* Return: nothin
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	const hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
		return;
	putchar('{');
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (comma > 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			comma++;
		}
		index++;
	}
	putchar('}');
	putchar('\n');
}
