#include "holberton.h"
/**
 * jack_bauer - rint every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23 && min <= 59)
	{
		_putchar((hour / 10) + 48);

		_putchar((hour % 10) + 48);
		_putchar(':');

		_putchar((min / 10) + 48);

		_putchar((min % 10) + 48);
		_putchar('\n');

		if (min == 59)
	{
			hour++;
			min = 0;
	}
		else
		{
			min++;
		}
	}
}

