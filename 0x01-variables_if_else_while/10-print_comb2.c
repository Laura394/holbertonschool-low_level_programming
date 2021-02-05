#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int cero;
		int nine;

		for (cero = '0'; cero <= '9'; cero++)
		{
			for (nine = '0'; nine <= '9'; nine++)
			{
				putchar(cero);
				putchar(nine);
				if (!(cero == '9' && nine == '9'))				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');

	return (0);
}
