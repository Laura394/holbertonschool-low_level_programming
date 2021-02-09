#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Return: Always 0 (Success)
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
