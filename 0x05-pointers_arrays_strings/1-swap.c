#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *@a: is a variable
 *@b: is a variable
 *Return: Always 0
 */
void swap_int(int *a, int *b)

{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
