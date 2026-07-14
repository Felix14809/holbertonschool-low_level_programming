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
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest;

	original_dest = dest;
	while (n > 0)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			dest++;
			n--;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
	}
	return (original_dest);
}
