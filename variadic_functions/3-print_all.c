#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints everything
 *@format: list of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *str;

	i = 0;
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
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
				if ((str = va_arg(ap, char *)) == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 1;
				break;
		}
		i++;
		if (format[i] != '\0' && j == 1)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
