#include<stdio.h>
/**
 * main - declares the int "n" includes an if else function
 * prints different messages and the variable
 * based on the number assigned to "n"
 *
 * Return is set back to 0
 */

main()
{
	int n;
	
	if (n>0)
	{
		printf("%d\n is positive\n", n);
	}
	else if (n<0)
	{
		printf("%d\n is negative\n", n);
	}
	else
	{
		printf("%d\n is zero\n", n);
	}
    return (0);

}
