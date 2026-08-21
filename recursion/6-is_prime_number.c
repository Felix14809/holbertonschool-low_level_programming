#include "main.h"

/**
* powrec - calculates x to the power of y
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
* sqrtrecursion - calculates the root of n
*@n: the number
*Return: int
*/
int sqrtrecursion(int n)
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
	return (1);
}
/**
 * is_prime_number - calculates if the number is prime with recursion
 *@n: number to check
 *Return: 1 if yes otherwise 0
 */
int is_prime_number(int n)
{
	int prime, i = 2;

	if (n < 2)
		return (0);
	prime = sqrtrecursion(n);
	while (i <= prime)
	{
		if (n % i == 0)
			return (0);
		if (i * i > n)
			return (1);
		i++;
	}
	return (1);
}
