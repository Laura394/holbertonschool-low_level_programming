#include "holberton.h"

/**
 * _islower - int c is lower
 *
 * Return
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

