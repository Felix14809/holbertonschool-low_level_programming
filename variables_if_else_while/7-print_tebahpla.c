#include <stdio.h>
/**
 * main - declares an integer
 * then runs a while loop
 * until z is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
	putchar (i);
	--i;
	}
	putchar ('\n');
	return (0);
}
