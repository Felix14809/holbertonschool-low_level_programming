#include "function_pointers.h"
/**
 * int_index - find and integer
 * @array: the passed array
 * @cmp: funtion passed
 * @size: size of array
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
