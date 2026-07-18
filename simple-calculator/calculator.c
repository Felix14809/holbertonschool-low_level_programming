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
	/*float a, b, sum;*/
	int option, fail;
	
	fail = 3;
	printf("Choose how you want to calculate your numbers \n1) Addition\n2) Subtract\n3) Multiply\n4) Divide\n5) Exit\n");
	while (fail >= 0)
	{
		scanf("%d", &option);
		printf("You choice is ");
		if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5)
		{
			while (getchar() != '\n')
    			;
				if (fail == 0){
					printf("invalid input, exiting..\n");
					return (0);
				}
			printf("an invalid choice, you have %d tries left\n", fail);
			fail--;
		}
		else if (option == 1)
			printf("addition\n");
		else if (option == 2)
			printf("subtraction\n");
		else if (option == 3)
			printf("multiplication\n");
		else if (option == 4)
			printf("division\n");
		else if (option == 5)
			printf("5. Bye!\n");
	}	
	return (0);
}
