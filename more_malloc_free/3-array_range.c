#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the min value of the int in the array
 * @max: the max value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array, i, total;

	i = 0;
	if (min > max)
		return (NULL);
	total = (max - min + 1) * sizeof(int);
	array = malloc(total);
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min = min + 1;
	}
	return (array);
}
