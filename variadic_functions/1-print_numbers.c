#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 *@n: number of ints to print
 *@separator: symbol to separate numbers
 *
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n -1)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
