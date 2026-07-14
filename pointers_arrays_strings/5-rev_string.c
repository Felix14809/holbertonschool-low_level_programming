#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the character pointed to
 *
 * Return:
 */
void rev_string(char *s)
{
	char *start;
	char *end;
	char temp;

	start = s;
	end = s;
	while (*end)
		end++;
	end--;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
    }
}
