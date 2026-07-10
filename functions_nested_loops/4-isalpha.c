#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 * @c: declared as an integer to be checked
 *
 * Return: 1 if c is an alphabetical, if not 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

