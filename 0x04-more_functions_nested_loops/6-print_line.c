#include "holberton.h"
/**
 * print_line - print a line continue.
 *@n: is a variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

