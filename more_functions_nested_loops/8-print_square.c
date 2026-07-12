#include "main.h"
/**
 * print_square - prints a square
 * @size: the integer that decides the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int side1 = 1;

	while (side1 <= size)
	{
		int side2 = 1;

		while (side2 <= size)
		{
			_putchar('#');
			side2++;
		}
		_putchar('\n');
		side1++ ;
	}
	_putchar('\n');
}
