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
	int new_word;

	start = a;
	new_word = 1;

	while (*a)
	{
		if (new_word && *a >= 'a' && *a <= 'z')
			*a = *a - 32;
		if (*a == ' ' || *a == '\t' || *a == '\n')
			new_word = 1;
		else
			new_word = 0;
		a++;
	}
	return (start);
}
