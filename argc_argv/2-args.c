#include "main.h"
/**
 * main - prints the arguments passed
 *@argc: number of arguments passed
 *@argv: the value of the passed arguments
 * Return: int argc
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[argc - argc + i]);
		i++;
	}
	return (argc);
}
