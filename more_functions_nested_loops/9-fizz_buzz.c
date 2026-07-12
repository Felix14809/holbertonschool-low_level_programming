#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers 1-100 while replacing multitdues of 3 and 5
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number < 100)
		{
			printf(" ");
		}
		number++;
	}
	putchar('\n');
}

