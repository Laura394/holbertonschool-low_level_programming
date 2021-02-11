#include "holberton.h"
/**
  3 * _isuper - checks for uppercase character.
  4 *@c: is a variable
  5 *Return: Always 0.
  6  */
int _isuper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		_putchar(1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		_putchar(0);
	}

	return (0);
}
