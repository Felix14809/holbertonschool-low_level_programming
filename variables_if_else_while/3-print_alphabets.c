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
	char a ='a';
	char A ='A';

	while (a <= 'z')
	{
	putchar(a);
	a++;
	}
	while (A <= 'Z')
	{
	putchar(a);
	}
	putchar ('\n');
	return (0);
}
