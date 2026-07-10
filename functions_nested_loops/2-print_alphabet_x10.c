#include "main.h"
/**
 * print_alphabet_x10 - make prototype for print_alphabet_x10
 * declares variable times
 * runs a while loop until a-z is printed
 * increment times each time z is printed until it reaches 10
 * finishes with a new line
 */
void print_alphabet_x10(void)
{
	int times = 1;

	while (times <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
			
		}
		times++;
		_putchar('\n');
	}
}
