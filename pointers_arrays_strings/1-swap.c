#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: the value to be updated
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
