#include "hash_tables.h"
/**
 * key_index - creates a hash table
 * @key: to hash
 * @size: of the array in the hash table
 * Return: pointer to the index the key should be stored in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = 0;

	index = (hash_djb2(key)) % size;
	return (index);
}
