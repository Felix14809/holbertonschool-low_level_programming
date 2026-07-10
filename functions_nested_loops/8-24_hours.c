#include "main.h"
/**
 * jack_bauer - prints every hour and minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	char hour1 = '0';
	char hour2 = '0';

	while (((hour1 == '2' && hour2 < '4')) || (hour1 < '2' && hour2 <= '9'))
	{
		char minute1 = '0';
		char minute2 = '0';

		while (minute1 < '6')
		{
			_putchar(hour1);
			_putchar(hour2);
			_putchar(':');
			_putchar(minute1);
			_putchar(minute2);
			_putchar('\n');
			minute2++;
			if (minute2 > '9')
			{
				minute2 = '0';
				minute1++;
			}
		}
		hour2++;
		if (hour2 > '9')
		{
			hour2 = '0';
			hour1++;
		}
	}
}
