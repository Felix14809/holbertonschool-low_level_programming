#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints everything
 *@format: list of arguments
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j, len;
	char *str;

	i = 0;
	len = 0;
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
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
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
