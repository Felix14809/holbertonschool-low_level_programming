#include "main.h"
/**
* *_strbrk - returns pointer to the first matching char in the string
* @s: pointer to string
* @accept: pointer to string
*
* Return: pointer to first matching char
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
