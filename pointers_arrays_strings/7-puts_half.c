#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the character pointed to
 *
 * Return:
 */
void puts_half(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	len--;
	len = len / 2;
	if (len % 2 == 1)
	{
		len++;
	}
	while(len > 0)
	{
		str--;
		len--;
	}
	while (*str)
	{
		_putchar(*str);
		str++;
	}
    _putchar('\n');
}

