#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - it prints single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (n = 0 ; n < 10 ; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
