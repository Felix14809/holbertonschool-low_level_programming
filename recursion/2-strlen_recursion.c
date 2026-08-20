#include "main.h"
/**
* _strlen_recursion - count the length of a string using recursion
*@s: the string
*Return: int string length
*/
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return ((_strlen_recursion(s) + 1));
}
