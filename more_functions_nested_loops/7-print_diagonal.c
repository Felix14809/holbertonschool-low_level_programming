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
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		lines++;
	}
	if (n < 1)
		_putchar('\n');
}
