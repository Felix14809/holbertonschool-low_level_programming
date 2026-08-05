#include "lists.h"
/**
*print_first - prints a string before the main executes
*
*Return: void
*/
__attribute__((constructor))
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
