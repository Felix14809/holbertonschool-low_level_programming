#include "main.h"
/**
 * puts2 - function that prints a string
 * @str: the character pointed to
 *
 * Return:
 */
void puts2(char *str)
{
	int i;
	int len;

	len =0;
	while (str[len])
		len++;
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
