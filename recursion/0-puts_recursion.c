#include "main.h"
/**
* _puts_recursion - printe a string using recursion
*@s: the string
*/
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	
}	
