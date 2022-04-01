
#include<stdio.h>

/**
 * main - print arguments
 *
 *@argc: counter
 *@argv: array
 *Return: Always return  0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
