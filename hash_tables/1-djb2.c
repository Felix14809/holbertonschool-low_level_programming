#include "hash_tables.h"
/**
 * hash_djb2 - creates a hash out of a string
 * @str: to hash
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (*str)
	{
		c = *str;
		hash = hash * 33 + c;
		str++;
	}
	return (hash);
}
