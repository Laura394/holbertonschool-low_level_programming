#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers n to 98
 *@n: interger
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		_putchar("%d, ", n);
		n--;
	}

	if (n == 98)
		_putchar("%d", n);

	_putchar("\n");
}

