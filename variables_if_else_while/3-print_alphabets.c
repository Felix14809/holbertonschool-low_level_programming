#include <stdio.h>
/**
 * main - declares 2 characters
 * then runs 2 while loops
 * until z and Z is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	char lower = 'a';
	char A = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar ('\n');
	return (0);
}
