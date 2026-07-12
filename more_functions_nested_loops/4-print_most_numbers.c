#include "main.h"
/**
 * print_most_numbers - prints digits from 0 to 9
 * except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number != 2 && != 4)
		{
			_putchar(number + '0');
		}
		number++;
	}
	_putchar('\n');
}
