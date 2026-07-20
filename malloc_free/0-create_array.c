#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates and array
 * @size: size of the array
 * @c: char to fill array with
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
