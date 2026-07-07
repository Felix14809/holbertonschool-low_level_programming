#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - declares the int "n" includes an if else function
 * prints different messages and the variable
 * based on the number assigned to "n"
 *
 * Return: is set back to 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);

}
