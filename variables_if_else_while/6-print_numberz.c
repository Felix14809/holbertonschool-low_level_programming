#include <stdio.h>
/**
 * main - declares an int
 * then runs a while loop
 * until numbers 0-9 is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar ('\n');
	return (0);
}
