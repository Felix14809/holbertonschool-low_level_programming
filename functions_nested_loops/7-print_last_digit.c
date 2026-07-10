#include "main.h"
/**
 * print_last_digit - checks numbers and prints the last digit
 * @n: the input to be checked
 * Convert to positive if less than 0
 * add '0' to convert to ASCII character
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -(n);
	}
	_putchar(n + '0');
	return (n);
}
