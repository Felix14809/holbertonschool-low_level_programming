#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: declared as an integer to be checked
 *
 * Return: 1 if c is lowercase, if not 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
