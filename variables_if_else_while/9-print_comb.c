#include <stdio.h>
/**
 * main - declares 2x integers
 * then runs a while loop with an if loop
 * until all combinations of 0-9 is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	int num1 = '0';

	while (num1 <= '8')
	{
		putchar(num1);
		putchar(',');
		putchar(' ');
		num1++;
	}
	putchar('9\n');
	return (0);
}

