#include "main.h"
/**
 * *leet - encodes string into 1337
 * @a: the string pointed to
 *
 * Return: start of string
 */
char *leet(char *a)
{
	char *start;
	char *letters = "AaEeOoTtlL";
	char *numbers = "4433007711";
	int i;

	start = a;
	while (*a)
	{
		i = 0;
		while (letters[i] != '\0' && numbers[i] != '\0')
		{
			if (*a == letters[i])
				*a = numbers[i];
			i++;
		}
		a++;
	}
	return (start);
}

