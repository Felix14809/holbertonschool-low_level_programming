#include "main.h"
/**
* *_strchr - find a character in a string
* @s: pointer to string
* @c: string to find
*
* Return: pointer to first occurence of the char
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
	}
	return (s);
}
