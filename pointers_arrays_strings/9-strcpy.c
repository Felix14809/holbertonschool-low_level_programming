#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the src to dest
 * @dest: the character pointed to
 * @src: what to copy to dest
 *
 * Return: char *dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest;
	int i;

	original_dest = dest;
	i = 0;
	while (src[i])
		i++;
	while (i >= 0)            
	{
		dest[i] = src[i];
		i--;
	}
	return (original_dest);
}
