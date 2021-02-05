#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char minu;
	char mayu;

	for (minu = 'a'; minu <= 'z'; ++minu)
		putchar(minu);
	for (mayu = 'A'; mayu <= 'Z'; ++mayu)
		putchar(mayu);
	putchar('\n');

	return (0);
}
