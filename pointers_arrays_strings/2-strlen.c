#include "main.h"
/**
 * _strlen - function that counts the lenght of a string
 * @s: the character pointed to
 *
 * Return: int that is the lenght of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}
