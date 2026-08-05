#include "main.h"
/**
* *_strstr - returns pointer to the where the substring starts
* @haystack: pointer to string
* @needle: pointer to string to find
*
* Return: pointer to first matching char
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	j = 0;
	while (haystack[j])
	{
		i = 0;
		if (needle[i] == haystack[j])
		{
			while (haystack[j] == needle[i])
			{
				j++;
				i++;
				if (needle[i] == '\0')
					return (haystack + j - i);
			}
		}
		j++;
	}
	return (NULL);
}
