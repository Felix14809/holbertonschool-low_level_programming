#include "main.h"
/**
 * *cap_string - makes the first letter of all words uppercase
 * @a: the string pointed to
 *
 * Return: start of string
 */
char *cap_string(char *a)
{
	char *start;

	start = a;
	while (*a)
	{	
		if (*a >= 'a' && *a <= 'z')
		{
			a--;
				if ((*a < 'a' || *a > 'z') && (*a < 'A' || *a > 'Z'))
				{
					a++;
					*a = *a - ' ';

				}
			a++;
		}
		while (*a >= 'a' && *a <= 'z')
			a++;
		a++;
	}
	return (start);
}
