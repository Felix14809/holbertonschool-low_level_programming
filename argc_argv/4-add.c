#include "main.h"
/**
 * main - prints the result of the multiplication of 2 args
 *@argc: number of arguments passed
 *@argv: the value of the passed arguments
 * Return: int argc
*/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i != argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;

	}
	printf("%d\n", sum);
	return (1);
}
