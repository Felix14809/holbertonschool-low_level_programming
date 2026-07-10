#include "main.h"
/**
 * main - fuction to print _putchar
 * include main.h to use _putchar function
 *
 * Return: to 0 always
 */
int main(void)
{
	char *theword = "_putchar";
	int i = 0;

	while (theword[i])
	{
		_putchar(theword[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
