#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the integer that decides how long the line is
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int lines = 1;

	while (lines <= n)
	{
		int spaces = 1;

		while (spaces < lines)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		lines++;
	}
	_putchar('\n');
}
