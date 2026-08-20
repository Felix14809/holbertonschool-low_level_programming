#include "main.h"
/**
* _strlen_recursion - count the length of a string using recursion
*@s: the string
*Return: int string length
*/
int _strlen_recursion(char *s)
{
	int len = 0;
	if (!*s)
		return (0);
	s++;
	len = _strlen_recursion(s) + 1;
	return (len);

}
