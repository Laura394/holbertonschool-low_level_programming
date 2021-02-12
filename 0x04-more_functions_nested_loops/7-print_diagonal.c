#include "holberton.h"
/**
 * print_diagonal - print a line diagonal.
 *@n: is a variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (b != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
