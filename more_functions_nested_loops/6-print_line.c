#include "main.h"
/**
 * print_line - prints a line
 * @n: the integer that decides how long the line is
 *
 * Return: void
 */
void print_line(int n)
{
	int lines = 1;

	while (lines <= n)
	{
		_putchar(95);
		lines++;
	}
	_putchar('\n');
}
