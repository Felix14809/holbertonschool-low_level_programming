#include "main.h"
/**
 * _abs - checks numbers and converts to absolute number
 * @n: the input to be checked
 *
 * Return: n if 0 or greater, convert to positive if less than 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	return (n);
}
