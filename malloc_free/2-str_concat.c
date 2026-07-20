#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings to a new space
 * @s1: string to allocate into memory
 * @s2: second string to concatenate after s1
 *
 * Return: pointer to space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s;
	char *concstr;

	s = 0;
	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	concstr = malloc(i + j + 1);
	while (*s1)
	{
		concstr[s] = *s1;
		s1++;
		s++;
	}
	while (*s2)
	{
		concstr[s] = *s2;
		s2++;
		s++;
	}
	concstr[s] = '\0';
	return (concstr);
}
