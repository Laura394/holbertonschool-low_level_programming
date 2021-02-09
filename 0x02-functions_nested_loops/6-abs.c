#include "holberton.h"
/**
 * _abs -  function computes the absolute value of the integer argument
 *@n: number
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
		if (n > 0)
			return (n);
		else if (n < 0)
			return (-n);

	return (0);
}
