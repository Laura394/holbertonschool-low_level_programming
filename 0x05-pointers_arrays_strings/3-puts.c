#include "holberton.h"
/**
 *_puts - prints a string
 *@str: is a variable
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
