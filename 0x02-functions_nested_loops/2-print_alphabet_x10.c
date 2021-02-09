#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char al;
	int cr;

	for(cr = 1; cr <= 10; cr++)
	{
		for(al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
	_putchar('\n');
	}
}
