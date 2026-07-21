#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings to a new space
 * @s1: string to allocate into memory
 * @s2: second string to concatenate after s1
 * @n: how many bytes of s2 to concatenate
 *
 * Return: pointer to space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, total;
	char *concstr;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	total = strlen(s1) + n;
	concstr = malloc(total);
	if (concstr == NULL)
		return (NULL);
	while (s1[i])
	{
		concstr[i] = s1[i];
		i++;
	}
	while (n > j && s2[j])
	{
		concstr[i] = s2[j];
		j++;
		i++;
	}
	concstr[i] = '\0';
	return (concstr);
}

