#include "main.h"
/**
 * main - prints the number of arguments passed
 *@argc: number of arguments passed
 *@argv: the value of the passed arguments
 * Return: int argc
*/
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc);
	return (1);
}
