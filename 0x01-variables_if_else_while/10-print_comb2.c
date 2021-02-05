#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int cero;

		cero = 48;
		while (cero <= 57)
		{
			putchar(cero);
			if (cero < 57)
			{
				putchar(44);
				putchar(32);
			}
			cero++;
		}
		putchar(10);
		return (0);

}
