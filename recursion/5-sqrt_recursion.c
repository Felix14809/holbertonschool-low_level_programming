#include "main.h"
/**
* powrec - calculates the root of y
*@n: the number
*@x: the checker
*Return: int
*/
int powrec(int n, int x)
{
	if (n == x * x)
		return (x);
	if (x * x > n)
		return (-1);
	return (powrec(n, x + 1));
}
/**
* _sqrt_recursion - calculates the root of n
*@n: the number
*Return: int
*/
int _sqrt_recursion(int n)
{
	int root = powrec(n, 1);

	return (root);
}
