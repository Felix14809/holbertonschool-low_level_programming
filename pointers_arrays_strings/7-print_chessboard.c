#include "main.h"
/**
* print_chessboard - prinst a 2d array
* @a: pointer to arrays
* @8: elements per array
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	j = 0;
	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
