#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;
	
	while (hour <= 23 && min <= 59){
		if (hour <= 9){
			printf("0");
		}
		printf("%d:", hour);
		if (min <= 9){
			printf("0");
		}
		printf("%d", min);
		printf("\n");

		if (min == 59){
			hour++;
			min = 0;
		}
		else {
			min++;
		}
	}
}
