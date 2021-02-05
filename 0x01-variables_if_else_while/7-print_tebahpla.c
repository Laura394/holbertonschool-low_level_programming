#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int letra = 122;

	while (letra >= 97)
	{
		putchar(letra);
		letra--;
		}
	putchar('\n');

	return (0);
}
