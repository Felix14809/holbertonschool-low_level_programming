#include "function_pointers.h"
/**
 * array_iterator - prints name
 * @array: the passed array
 * @action: funtion passed
 * @size: size of array
 *
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
