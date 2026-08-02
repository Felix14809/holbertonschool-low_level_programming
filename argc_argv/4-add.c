#include "main.h"
/**
 * main - prints the result of the multiplication of 2 args
 *@argc: number of arguments passed
 *@argv: the value of the passed arguments
 * Return: int
*/
int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;

	}
	printf("%d\n", sum);
	return (0);
}
