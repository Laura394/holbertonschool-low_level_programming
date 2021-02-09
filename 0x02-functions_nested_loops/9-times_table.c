#include "holberton.h"

/**
* times_table - print multiplication table
 */

void times_table(void)
{
	int nine;
	int one;
	int multi;

	for (nine = 0; nine <= 9; nine++)
	{
		for (one = 0; one <= 9; one++)
		{
			multi = (nine * one);

			if (one == 0)
			{
				_putchar('0' + multi);
			}
			else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multi);
			}
			else if (multi > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multi / 10));
				_putchar('0' + (multi % 10));
			}
		}
		_putchar('\n');
	}
}
