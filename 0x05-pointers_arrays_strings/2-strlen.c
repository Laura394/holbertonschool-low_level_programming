#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: is a variable
 *Return: Always 0
 */
int _strlen(char *s)
{
	int a;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
