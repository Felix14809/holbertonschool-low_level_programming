#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that creates a 2d array
 * @width: array size
 * @height: array size
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
			free(array);
			return (NULL);
		}
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
