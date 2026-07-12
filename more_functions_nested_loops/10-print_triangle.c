#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the integer that decides the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int side1 = 1;

	while (side1 <= size)
	{
		int space = size - side1;

		while (space >= 0)
		{
			int side2 = 1;

			if (space > 0)
			{
				_putchar(' ');
			}
			if (space <= 0)
			{
				while (side2 <= side1)
				{
					_putchar('#');
					side2++;
				}
			}
			space--;
		}
		_putchar('\n');
		side1++;
	}
	if (size < 1)
		_putchar('\n');
}
