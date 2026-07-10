#include "main.h"
/**
 * print_alphabet - make prototype for print_alphabet
 * declares a variable
 * runs a while loop until z is printed
 * finishes with a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
