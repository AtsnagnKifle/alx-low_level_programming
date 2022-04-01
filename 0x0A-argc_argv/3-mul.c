#include<stdio.h>
#include<stdlib.h>

/**
 * main - print multiplication
 *
 *@argc: counter
 *@argv: array
 *Return: Always return  0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int ans;

	ans = 1;

	if ((argc - 1) == 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			ans *= atoi(argv[i]);
		}
		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
