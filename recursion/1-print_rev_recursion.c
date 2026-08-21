#include "main.h"
/**
* _print_rev_recursion - printe a string using recursion in reverse
*@s: the string
*/
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
