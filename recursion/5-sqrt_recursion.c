#include "main.h"
/**
* _pow_recursion - calculates x to the power of y
*@x: the number
*@y: the power
*Return: int
*/
int powrec(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * powrec(x, y - 1));
}
/**
* _sqrt_recursion - calculates the root of n
*@n: the number
*Return: int
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (powrec(i, 2) == n)
		{
		return (i);
		}
		i++;
	}
	return (-1);
}
