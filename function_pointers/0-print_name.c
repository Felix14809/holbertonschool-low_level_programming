#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: the passed string
 * @f:function
 *
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
