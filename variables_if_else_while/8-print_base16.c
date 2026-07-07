#include <stdio.h>
/**
 * main - declares 2 vars
 * then runs 2 while loops
 * until 0-9 and a-f is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	int number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}
