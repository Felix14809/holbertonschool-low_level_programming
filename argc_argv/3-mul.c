#include "main.h"
/**
 * main - prints the result of the multiplication of 2 args
 *@argc: number of arguments passed
 *@argv: the value of the passed arguments
 * Return: int
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
		printf("Error\n");
	return (0);
}
