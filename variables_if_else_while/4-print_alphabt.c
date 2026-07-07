#include <stdio.h>
/**
 * main - declares a character
 * then runs a while loop
 * until z and not q and e is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}

		lower++;
	}
	putchar ('\n');
	return (0);
}

