#include "main.h"
#include<stdio.h>
/**
 * is_prime_number - return 1 if the given number is prime otherwise 0
 *
 *Return: 1 if number is prime otherwise 0
 *@n: the given number
 */

int is_prime_number(int n)
{

	if (n < 3)
		return (0);

	return (check(n, (n / 2) + 1));
}
/**
 * check - recursively check prime or not
 *
 *Return: 1 if number is prime otherwise 0
 *@n: the given number
 *@d: starting number
 */

int check(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (check(n, d - 1));
}
