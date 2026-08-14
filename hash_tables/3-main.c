#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int hash1, hash2;
    char *string1 = "hetairas";
    char *string2 = "mentioner";

    
    ht = hash_table_create(1024);
    hash1 = hash_djb2((const unsigned char *)string1) % ht->size;
    hash_table_set(ht, "hetairas", "beans");
    printf("%s\n%s\n", ht->array[hash1]->key, ht->array[hash1]->value);
    hash2 = hash_djb2((const unsigned char *)string2) % ht->size;
    hash_table_set(ht, "mentioner", "bweans");
    printf("%s\n%s\n", ht->array[hash1]->key, ht->array[hash1]->value);
    return (EXIT_SUCCESS);
}