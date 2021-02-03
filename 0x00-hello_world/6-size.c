#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long longlongType;
	float floatType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of longint: %zu bytes\n", sizeof(longintType));
	printf("Size of longlong: %zu byte\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
