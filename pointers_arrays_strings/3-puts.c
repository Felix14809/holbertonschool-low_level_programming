#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the character pointed to
 *
 * Return:
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

