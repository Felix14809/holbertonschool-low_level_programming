#include "main.h"
#include <stdio.h>
/**
 * *_strcat - appends 
 * @dest: the character pointed to
 * @src: what to append to dest
 *
 * Return: char *dest
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (*src)            
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original_dest);
}
