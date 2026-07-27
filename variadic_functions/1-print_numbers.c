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
		if (separator != NULL)
			printf("%d%c ", va_arg(ap, int), *separator);
		else
			printf("%d", va_arg(ap, int));
		i++;
	}
	va_end(ap);
	printf("\n");
}
