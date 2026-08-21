#include "main.h"
/**
* factorial - calculates the factorial of the passed number
*@n: the string
*Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
