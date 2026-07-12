#include "main.h"
/**
 * _isalpha - checks for digits
 * @c: declared as an integer to be checked
 *
 * Return: 1 if c is a digit, if not 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
