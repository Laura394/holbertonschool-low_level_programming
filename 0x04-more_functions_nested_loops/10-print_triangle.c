#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *@size: is a variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= (size - a); b++)
			_putchar(' ');
		for (c = 1; c <= a ; c++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
