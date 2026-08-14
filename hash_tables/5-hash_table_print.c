#include "hash_tables.h"
/**
* hash_table_print - printe the whole hash table
* @ht: pointer to the hashtable
* Return: nothin
*/
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index = 0;
    const hash_table_t *temp = ht;
    int comma = 0;
    

    if (ht == NULL)
        return;
    putchar('{');
    while (index < ht->size)
    {
        
        if (temp->array[index] != NULL)
        {
            while (temp->array[index] != NULL)
            {
                if (comma > 0)
                    printf(", ");
                printf("'%s': '%s'", temp->array[index]->key, temp->array[index]->value);
                temp->array[index] = temp->array[index]->next;
                comma++;
            }
            temp = ht;
        }
        index++;
    }
    putchar('}');
    putchar('\n');
}
