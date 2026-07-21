#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: number of elements in the array
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
