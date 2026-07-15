#include "main.h"
/**
 * *string_toupper - makes all lowercase uppercase
 * @a: the string pointed to
 *
 * Return: start of string
 */
char *string_toupper(char *a)
{
	char *start;

	start = a;
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - ' ';
		a++;
	}
	return (start);
}
