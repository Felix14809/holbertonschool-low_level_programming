#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that duplicates a string to a new space in memory
 * @str: string to duplicate into memory
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	int i, j;
	char *dstr;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dstr = malloc(i + 1);
	while (str[j])
	{
		dstr[j] = str[j];
		j++;
	}
	dstr[j] = '\0';
	return (dstr);
}
