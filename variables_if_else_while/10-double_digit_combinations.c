#include <stdio.h>
/**
 * main - declares 2x integers
 * then runs a while loop with an if loop
 * until all combinations of 2x 0-9 is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		putchar(num1);
		putchar(num2);
		putchar(',');
		putchar(' ');
		num2++;
		if (num2 > '9')
		{
			num1++;
			num2 = '0';
		}
	}
	return (0);
}

