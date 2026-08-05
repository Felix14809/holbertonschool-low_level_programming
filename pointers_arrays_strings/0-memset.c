#include "main.h"
/**
 * *_memset - fills n bytes of *s with b
 * @s: the memory area pointed to
 * @b: the byte to add
 * @n: the number of bytes to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
