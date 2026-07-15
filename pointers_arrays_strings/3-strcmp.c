#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer 1
 * @s2: pointer 2 to compare against 1
 *
 * Return: int diff
 */
int _strcmp(char *s1, char *s2)
{
		while (*s1 || *s2)
		{
			if (*s1 != *s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);
			s1++, s2++;
		}
	return (0);
}

