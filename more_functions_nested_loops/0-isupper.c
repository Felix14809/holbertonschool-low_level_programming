#include "main.h"
/**
 * _isupper - checks for uppercase alphabetical character
 * @c: declared as an integer to be checked
 *
 * Return: 1 if c is an upper, if not 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
