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
		for (c = 0 ; c <= 14 ; c++)
		{
			if (c <= 9)
				_putchar('0' + c);
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
		}
		_putchar('\n');
	}

}
