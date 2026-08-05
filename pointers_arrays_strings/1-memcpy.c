#include "main.h"
/**
* *_memcpy - copies n bytes from *src to *dest
* @src: the memory area to copy
* @dest: the destination area
* @n: the number of bytes to fill
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
