#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a char to int
 * @s: the character to convert
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int neg = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			i = i * 10;
			i += (*s - '0');
		}
		else if (*s == '-')
			neg++;
		else if (i > 0)
			break;
		s++;
	}
	if (neg % 2 == 1)
		return (-i);
	else
		return (i);
}
