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
	char *start;

	start = s;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
