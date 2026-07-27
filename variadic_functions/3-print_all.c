#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_s - prints everything
 *@ap: the parameter to check and print
 */
void print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints everything
 *@format: list of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j, len;

	len = 0, i = 0;
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[len])
		len++;
	va_start(ap, format);
	while (i < len)
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 1;
				break;
			case 's':
				print_s(ap);
				j = 1;
				break;
		}
		i++;
		if (i != len && j == 1)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
