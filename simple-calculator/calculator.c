#include <stdio.h>
/**
 * main - A simple calculator that runs in your terminal
 * 
 * 
 *
 * Return: void
 */
int main(void)
{
	float a, b, sum;
	int option;
	
	printf("Choose how you want to calculate your numbers \n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Exit\n");
	while (scanf("%d", &option) != 1 || option < 1 || option > 5)
	{
		while (getchar() != '\n')
    		;
		printf("Invalid input. Try again or enter 5 to exit\n");
	}	
	if (option == 5)
	{
		printf("Bye for now!");
		return (0);
	}
	else 
		printf("You choice is: %d\nEnter two numbers separated by a space:", option);	
	while (scanf("%f %f", &a, &b) != 2)
	{
		while (getchar() != '\n')
    			;
			printf("Invalid input. Try again or press Ctrl + C to terminate\n");
	}
	if (option == 1)
		sum = a + b;
	else if (option == 2)
		sum = a - b;
	else if (option == 3)
		sum = a * b;
	else if (option == 4)
	{	
		if (b == 0)
		{
			printf("ERROR: division by 0\n");
			return (0);
		}
		sum = a / b;	
	}
	if (sum == (int)sum)
		printf("Result: %d\n", (int)sum);
	else
		printf("Result: %.2f\n", sum);
	return (0);
}
