#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * more_numbers - print numbers from 0 to 9 except 2 and 4
 *
 */

void more_numbers(void)
{
	int c;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 48 ; c <= 57 ; c++)
		{
			putchar(c);
		}
		for (c = 48 ; c <= 52 ; c++)
		{
			putchar('1');
			putchar(c);
		}
		putchar('\n');
	}

}
