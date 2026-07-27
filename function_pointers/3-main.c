#include "3-calc.h"
/**
 * main - running it alll
 *@argc: number of arguments
 *@argv: the values passed
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	
	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	else if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
		 *argv[2] != '/' && *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	else if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
