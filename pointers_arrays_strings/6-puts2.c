#include "main.h"
/**
 * puts2 - function that prints a string
 * @str: the character pointed to
 *
 * Return:
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

