#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array with malloc
 * @nmemb: number of elements
 * @size: size of the elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	char *array;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	array = malloc(total);
	if (array == NULL)
		return (NULL);
	while (i < (total))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
