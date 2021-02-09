#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int tabla, numero;
 
	for (tabla<=9; tabla++)
		for (numero=1; numero<=10; numero++)
			_putchar("%d ',' %d ' ' %d\n", tabla, numero, tabla*numero);
}
