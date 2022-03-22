#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev_string - revers a string
 *
 *@s: parameter
 */

void rev_string(char *s)
{
	int len;
	int counter;
	char *begin;
	char *end;
	char tmp;

	begin = s;
	end = s;
	len = strlen(s);

	for (counter = 0; counter < (len - 1) ; counter++)
	{
		end++;
	}

	for (counter = 0; counter < len / 2; counter++)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}
