#include "main.h"
/**
 * more_numbers - prints digits from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int number = 0;
	int times = 0;
	
	while (times < 10)
	{	
		while (number < 15)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
			number++;
		}
		times++;
		_putchar('\n');
	}
}
