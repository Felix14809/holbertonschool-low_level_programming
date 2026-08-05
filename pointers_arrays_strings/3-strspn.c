#include "main.h"
/**
* *_strspn - returns how many intial bytes that match from each string
* @s: pointer to string
* @accept: pointer to string
*
* Return: u int number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, bytes, found;

	bytes = 0;
	while (s[bytes])
	{
		found = 0;
		i = 0;
		while (accept[i])
		{
			if (s[bytes] == accept[i])
			{
				found = 1;
			}
			i++;
		}
		if (found == 0)
			break;
		bytes++;
	}
	return (bytes);
}
