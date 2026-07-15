#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: the int array pointed to
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start;
	int *end;
	int temp;

	start = a;
	end = a + (n - 1);
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
