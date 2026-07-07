#include <stdio.h>
/**
 * main - declares a character
 * then runs a do while loop
 * until character "z" is printed
 *
 * Return: is set back to 0
 */
int main(void)
{
	char a;

	a = 'a';
	putchar(a);
	do
	{
		a++;
		putchar(a);
	}while(a !='z')
	return (0);
}
