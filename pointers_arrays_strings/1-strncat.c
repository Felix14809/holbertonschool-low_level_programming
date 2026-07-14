#include "main.h"
#include <stdio.h>
/**
 * *_strcat - appends
 * @dest: the character pointed to
 * @src: what to append to dest
 * @n: the limiter
 *
 * Return: char *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	*dest = *src;
	n--;
	while (n >= 0 && *dest)
	{
		dest++;
		src++;
		*dest = *src;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
