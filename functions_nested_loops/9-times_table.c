#include "main.h"
/**
 * times_table - prints the 9 times table
 * Separeted by "," spaces and extra spaces on double digit totals
 *
 * Return: void
 */
void times_table(void)
{
	int dig1 = 0;

	while (dig1 <= 9)
	{
		int dig2 = 0;

		while (dig2 <= 9)
		{
			int total = dig1 * dig2;

			if (total > 9)
			{
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
			else if ((total < 10 && dig2 != 0) || (dig1 != 0 && dig2 > 0))
			{
				_putchar(' ');
				_putchar(total + '0');
			}
			else
				_putchar('0');
			if (dig2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			dig2++;
		}
		dig1++;
	}
}
