#include "holberton.h"
/**
 * print_last_digit - Print the last digit
 *@n: is a variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}

