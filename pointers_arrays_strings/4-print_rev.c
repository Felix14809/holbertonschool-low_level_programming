#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: the character pointed to
 *
 * Return:
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
