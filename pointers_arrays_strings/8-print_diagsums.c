#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals
 * @a: pointer to the array
 * @size: number of elements in the array
 *
 * Return: pointer to s
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int x = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		i++;
	}
	while (i > 0)
	{
		x += (size - 1);
		sum2 += a[x];
		i--;
	}
	printf("%d, %d\n", sum1, sum2);
}

