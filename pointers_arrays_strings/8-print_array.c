#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the array
 * @a: the character pointed to
 * @n: the number of elements to be printed
 *
 * Return:
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%d, ", *a);
		a++;
		n--;
	}
	printf("\n");
}
